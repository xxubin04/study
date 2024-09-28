#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
// 한 칸 띄어쓰기 이슈 고치기

int main() {
	string word;
	vector<string> v;
	cin >> word;

	// 입력받은 문자열인 word가 "exit"이 아닌 동안
	while (word != "exit") {
		 
		// word가 이미 vector에 저장되어 있다면,
		// vector에 문자열 word 저장하고 사전순으로 정렬
		if (find(v.begin(), v.end(), word) == v.end()) {
			v.push_back(word);
			sort(v.begin(), v.end());
		}
		// word가 vector에 저장되어 있지 않다면, vector에서 word를 삭제
		else {  
			/*remove(v.begin(), v.end(), word);*/
			for (auto it = v.begin(); it != v.end(); it++) {
				if (*it == word && it != v.end() - 1)  // vector내부 문자열이 word이면서, 마지막 원소가 아니라면
					it = v.erase(it);  // it = 넣으니까 되는 이유?
				else if (*it == word && it == v.end() - 1) {  // vector 내부 문자열이 word이면서, 마지막 원소라면
					v.erase(it);
					break;
				}
			}
		}

		// vector 내부의 원소들을 차례대로 출력 
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";

		cout << endl;
		cin >> word;
	}
}