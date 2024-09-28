#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>
#include <cassert>
#include <map>
using namespace std;

struct Person {
	string name, address;
	string phone, email, web;
};

vector<Person> directory;
vector<string> split_line(string& line, char delimiter);
string trim(string str);
void load_data(string file_name);
void print_person(Person& p);
void list_directory();
void search_directory(string& prefix);
Person get_person_info(string name);
void add_person(string name);
void delete_person(string name);
void search_words(string word_set);


void save_directory() {
	ofstream outfile("address.tsv");
	for (auto& p : directory)
		outfile << p.name << '\t' << p.address << '\t' << p.phone
		<< '\t' << p.email << '\t' << p.web << endl;
	outfile.close();
}

int main() {
	load_data("address.tsv");
	string command, arguments;
	while (1) {
		cout << "$ ";
		cin >> command;
		if (command == "exit")
			break;
		if (command == "list")
			list_directory();
		else if (command == "find") {
			getline(cin, arguments);
			string name = trim(arguments);
			if (name.length() <= 0)
				continue;
			search_directory(name);
		}
		else if (command == "add") {
			getline(cin, arguments);
			string name = trim(arguments);
			if (name.length() <= 0)
				continue;
			add_person(name);
		}
		else if (command == "delete") {
			getline(cin, arguments);
			string name = trim(arguments);
			if (name.length() <= 0)
				continue;
			delete_person(name);
		}
		else if (command == "save") {
			save_directory();
		}
		else if (command == "search") {  // search ó�� ��� 
			getline(cin, arguments);
			string word_set = trim(arguments);
			search_words(word_set);  // search_words �Լ� ȣ�� 
		}
	}
	return 0;
}

// search_words �Լ� 
void search_words(string word_set) {
	map<string, int> words;  // key���� �˻���, value���� ���忩��(�����ϸ� 1, �������� ������ 0)�� ����

	while (word_set.length()) {  // word_set�� "search A & B & C"���� "A & B & C" ���ڿ��� ����
		if (word_set.find("&") != string::npos) {  // &�� �ִٸ� (������ �˻�� �ƴ϶��)
			words[word_set.substr(0, word_set.find("&") - 1)] = 0;  // "&" �� ���� ������ �����Ƿ� �ε��� �����ϰ� value�� 0���� ���� 
			word_set.erase(0, word_set.find("&") + 2);  // �˻������ " & "���� ����
		}
		else {  // &�� ���ٸ� (������ �˻�����)
			word_set = trim(word_set);
			words[word_set] = 0;  // word_set���� ������ �˻��� �ϳ��� �����Ƿ� �״�� 0���� ����
			word_set = "";  // while�� ������ "word_set.length()"�̹Ƿ� 0���� ����� Ż��
		}
	}

	for (auto p : directory) {
		int total = 0;  // total�� �˻������ value���� ��
		for (auto i : words)
			i.second = 0;  // ���� ����� �������� �˻����� ���忩�η� ���ŵǾ� �����Ƿ� 0���� �ٽ� �ʱ�ȭ

		for (auto i : words) {
			string combined_info = p.name + " " + p.address + " " + p.phone + " " + p.email + " " + p.web;  // combined_info�� ����� ��� ������ ���� ���ڿ��� ����
			if (combined_info.find(i.first) != string::npos)  // �˻�� ����� ���� ���ڿ��� �����Ѵٸ�
				i.second = 1;  // �ش� �˻����� value�� 1�� ����
			total += i.second;  // total�� �˻����� value�� ����
		}

		if (total == words.size())  // total�� �˻����� ������ ���ٸ� (��� �˻�� �����Ѵٸ�)
			print_person(p);  // �ش� ����� ������ ��� 
	}
}

vector<string> split_line(string& line, char delimiter) {
	vector<string> tokens;
	stringstream sstream(line);
	string str;
	while (getline(sstream, str, delimiter))
		tokens.push_back(str);
	return tokens;
}

string trim(string str) {
	int s = 0, t = str.length() - 1;
	while (s < str.length() && isspace(str[s]))
		s++;
	while (t >= 0 && isspace(str[s]))
		t--;
	if (s <= t)
		return str.substr(s, t - s + 1);
	else
		return "";
}

void load_data(string file_name) {
	string line;

	ifstream infile(file_name);

	while (getline(infile, line)) {
		vector<string> tokens = split_line(line, '\t');

		assert(tokens.size() >= 4 && tokens.size() <= 5);

		Person p;
		p.name = tokens.at(0);
		p.address = tokens.at(1);
		p.phone = tokens.at(2);
		p.email = tokens.at(3);
		if (tokens.size() == 5)
			p.web = tokens.at(4);

		directory.push_back(p);
	}
	infile.close();
}

void print_person(Person& p) {
	cout << p.name << ":" << endl;
	cout << "	Address: " << p.address << ":" << endl;
	cout << "	Phone: " << p.phone << ":" << endl;
	cout << "	Email: " << p.email << ":" << endl;
	cout << "	Web: " << p.web << ":" << endl;
}

void list_directory() {
	for (auto& person : directory) {
		print_person(person);
	}
}

void search_directory(string& prefix) {
	bool exist = true;
	for (auto& p : directory) {
		if (p.name.compare(0, prefix.size(), prefix) == 0) {
			print_person(p);
			exist = false;
		}
		else if (p.name.compare(0, prefix.size(), prefix) > 0 && exist) {
			/*string first_name = prefix.substr(0, prefix.find(" "));*/
			cout << "No person '" << prefix << "' exists." << endl;
			break;
		}
	}
}

Person get_person_info(string name) {
	Person p;
	string line;
	p.name = name;
	cout << "	Address: ";
	getline(cin, line);
	p.address = trim(line);
	cout << "	Phone: ";
	getline(cin, line);
	p.phone = trim(line);
	cout << "	Email: ";
	getline(cin, line);
	p.email = trim(line);
	cout << "	Web: ";
	getline(cin, line);
	p.web = trim(line);
	return p;
}

void add_person(string name) {
	Person p = get_person_info(name);
	auto it = directory.begin();
	while (it != directory.end() && it->name <= name)
		it++;
	it = directory.insert(it, p);
}

void delete_person(string name) {
	string answer;
	for (auto it = directory.begin(); it != directory.end();) {
		if (it->name.compare(0, name.size(), name) == 0) {
			cout << "Want to delete '" << it->name << "'? ";
			cin >> answer;
			if (answer == "yes" || answer == "y") {
				cout << "'" << it->name << "' deleted." << endl;
				it = directory.erase(it);
			}
			else
				it++;
		}
		else if (it->name.compare(0, name.size(), name) > 0)
			break;
		else
			it++;
	}
}

