#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
// �� ĭ ���� �̽� ��ġ��

int main() {
	string word;
	vector<string> v;
	cin >> word;

	// �Է¹��� ���ڿ��� word�� "exit"�� �ƴ� ����
	while (word != "exit") {
		 
		// word�� �̹� vector�� ����Ǿ� �ִٸ�,
		// vector�� ���ڿ� word �����ϰ� ���������� ����
		if (find(v.begin(), v.end(), word) == v.end()) {
			v.push_back(word);
			sort(v.begin(), v.end());
		}
		// word�� vector�� ����Ǿ� ���� �ʴٸ�, vector���� word�� ����
		else {  
			/*remove(v.begin(), v.end(), word);*/
			for (auto it = v.begin(); it != v.end(); it++) {
				if (*it == word && it != v.end() - 1)  // vector���� ���ڿ��� word�̸鼭, ������ ���Ұ� �ƴ϶��
					it = v.erase(it);  // it = �����ϱ� �Ǵ� ����?
				else if (*it == word && it == v.end() - 1) {  // vector ���� ���ڿ��� word�̸鼭, ������ ���Ҷ��
					v.erase(it);
					break;
				}
			}
		}

		// vector ������ ���ҵ��� ���ʴ�� ��� 
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";

		cout << endl;
		cin >> word;
	}
}