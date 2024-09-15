#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
	ifstream infile("input4.txt");
	map<string, int> words;
	string word;
	char ch;

	while (infile.get(ch)) {
		if (!infile) {
			break;
		}
		else if (!isspace(ch)) {
			if (isalpha(ch)) 
				word += ch;
		}
		else if (isspace(ch)) {
			if (!word.empty()) {
				words[word]++;
				word = "";
			}
		}
	}

	if (!word.empty()) {
		words[word]++;
	}

	for (const auto& pair : words) {
		cout << pair.first << " " << pair.second << endl;
	}

	return 0;
}