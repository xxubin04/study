#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	ifstream infile("shuffled_dict.txt");
	
	map<string, string> dict;  // key: �ܾ�, value: ����
	vector<string> used;       // �� �� ����� �ܾ� ������ vector
	string line;               // ���Ͽ����� �� �پ� �о�� ���ڿ�
	string definition;         // ã���� �ϴ� �ܾ��� ����
	string word;               // ���� �� �ܾ�
	string finding_word;       // ã���� �ϴ� ���ڿ� 
	cin >> finding_word;

	// '\t'�� �������� �ܾ�� ���� �����Ͽ� dict�� ����
	while (getline(infile, line)) {
		auto w = line.find('\t');  
		dict[line.substr(0, w)] = line.substr(w + 1);
	}

	// ã���� �ϴ� �ܾ dict���� ã�� ���
	for (pair<string, string> p : dict) {
		if (p.first == finding_word) {
			definition = p.second;
			cout << p.first << ": " << p.second << endl;
			used.push_back(p.first);  // �� �� ����� �ܾ�� vector�� ���
		}
	}

	// definition = ã���� �ϴ� �ܾ��� ����
	while(definition.length()) {
		if (definition.find(" ") != string::npos) {  // ������ �ִٸ�
			word = definition.substr(0, definition.find(" "));  // ������ �������� word�� ���� �� �ܾ� ����
			definition.erase(0, definition.find(" ")+1);  // �ش� �ܾ�� definition���� ����
			for (pair<string, string> p : dict) {  // �ش� �ܾ dict�� �ְ�, �ܾ��� ���̰� 3�̻��̰�, �� ���� ��µ��� ���� �ܾ���
				if (p.first == word && (p.first).length() >= 3 && (find(used.begin(), used.end(), word)) == used.end()) {  // ������ true
					cout << p.first << ": " << p.second << endl;
					used.push_back(p.first);  // �� �� ����Ͽ����Ƿ� �ش� �ܾ�� vector�� uesd�� ���� 
				}
			}
		}
		else {  // ������ ������ �ܾ��� (������ ���ٸ�) definition ��ü�� �ܾ��̴�.
			for (pair<string, string> p : dict) {
				if (p.first == definition && (p.first).length() >= 3) {  // �ش� �ܾ dict�� �ִ� �ܾ��̰�, �ܾ��� ���̰� 3 �̻��̶��
					cout << p.first << ": " << p.second << endl;
					dict.erase(p.first);  
				}
			}
			definition = "";  // while���� ������ ���� �� ���ڿ��� ����
		}
	}
	return 0;
}