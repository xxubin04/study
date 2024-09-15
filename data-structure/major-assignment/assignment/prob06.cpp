#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt = 0;
	int std = 0;
	int spaceIdx = 0;
	int sentence_length = 0;
	string sentence;
	string answer;
	string output = "";
	bool check = false;
	bool initial = false;

	while (true) {
		std::cout << "$ ";
		getline(cin, sentence);

		answer = sentence;
		if (sentence != "exit") {
			sentence_length = sentence.size() - 1;

			for (int i = sentence.size()-1; i > 0; i--) {
				if (sentence[i] == ' ')
					sentence = sentence.substr(0, i);
				else
					break;
			}
			while (true) {
				spaceIdx = sentence.find(' ');
				check = spaceIdx;
				if (spaceIdx != check + 1)
					std = true;
				if (spaceIdx != check + 1 && std)
					initial = true;
				if (spaceIdx == 0) {
					sentence = sentence.substr(spaceIdx + 1, sentence.size());
					continue;
				}
				else if (spaceIdx == -1) {
					break;
				}

				output += sentence.substr(0, spaceIdx + 1);
				sentence = sentence.substr(spaceIdx, sentence.size());
				if (check && initial) {
					cnt++;
				}	
			}
		}
		else
			break;
		std::cout << answer << ":" << answer.size() << ":" << cnt + 1 << endl;
		output = "";
		cnt = 0;
	}

	return 0;
}



