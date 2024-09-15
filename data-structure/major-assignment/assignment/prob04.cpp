#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ifstream infile("input4.txt");
	vector<string> words;

	string word;
	char ch;
	while (infile.get(ch)) {
		if (!infile) {
			break;
		} else if (!isspace(ch)) {
			word += ch;
		} else if (isspace(ch)) {
			if (!word.empty()) {
				if (find(words.begin(), words.end(), word) == words.end()) {
					cout << word << endl;
					words.push_back(word);
				}
			}
			word = "";
		}
	}

	if (!word.empty() && find(words.begin(), words.end(), word) == words.end()) {
		cout << word << endl;
		words.push_back(word);
	}

	return 0;
}