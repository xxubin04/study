#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	ifstream infile("shuffled_dict.txt");
	
	map<string, string> dict;  // key: 단어, value: 설명
	vector<string> used;       // 한 번 출력한 단어 저장할 vector
	string line;               // 파일에서의 한 줄씩 읽어올 문자열
	string definition;         // 찾고자 하는 단어의 설명
	string word;               // 설명 속 단어
	string finding_word;       // 찾고자 하는 문자열 
	cin >> finding_word;

	// '\t'를 기준으로 단어와 정의 구분하여 dict에 저장
	while (getline(infile, line)) {
		auto w = line.find('\t');  
		dict[line.substr(0, w)] = line.substr(w + 1);
	}

	// 찾고자 하는 단어를 dict에서 찾아 출력
	for (pair<string, string> p : dict) {
		if (p.first == finding_word) {
			definition = p.second;
			cout << p.first << ": " << p.second << endl;
			used.push_back(p.first);  // 한 번 출력한 단어는 vector에 기록
		}
	}

	// definition = 찾고자 하는 단어의 설명
	while(definition.length()) {
		if (definition.find(" ") != string::npos) {  // 공백이 있다면
			word = definition.substr(0, definition.find(" "));  // 공백을 기준으로 word에 설명 속 단어 저장
			definition.erase(0, definition.find(" ")+1);  // 해당 단어는 definition에서 지움
			for (pair<string, string> p : dict) {  // 해당 단어가 dict에 있고, 단어의 길이가 3이상이고, 한 번도 출력되지 않은 단어라면
				if (p.first == word && (p.first).length() >= 3 && (find(used.begin(), used.end(), word)) == used.end()) {  // 없으면 true
					cout << p.first << ": " << p.second << endl;
					used.push_back(p.first);  // 한 번 출력하였으므로 해당 단어는 vector인 uesd에 저장 
				}
			}
		}
		else {  // 설명에서 마지막 단어라면 (공백이 없다면) definition 자체가 단어이다.
			for (pair<string, string> p : dict) {
				if (p.first == definition && (p.first).length() >= 3) {  // 해당 단어가 dict에 있는 단어이고, 단어의 길이가 3 이상이라면
					cout << p.first << ": " << p.second << endl;
					dict.erase(p.first);  
				}
			}
			definition = "";  // while문을 끝내기 위해 빈 문자열로 정의
		}
	}
	return 0;
}