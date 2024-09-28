#include <iostream>
#include <string>
#include <vector>

using namespace std;
// 벡터의 이터레이터와 erase 함수 사용

int main() {
	int n = 0;
	int cnt = 0;
	int num = 0;
	vector<int> v;
	int array_size = 0;

	cin >> n;

	// 2부터 n까지의 수 vector에 저장
	for (int i = 2; i <= n; i++)
		v.push_back(i);

	// 배수인 경우에는 원소 지우고 다음 iterator로 갱신 
	for (auto i = v.begin(); i < v.end(); i++) {
		for (auto j = v.begin(); j < v.end();) {
			if (*j % *i == 0 && *j != *i) {
				j = v.erase(j);
			}
			else {
				j++;  // 배수가 아닌 경우에는 다음 iterator로 이동
			}
		}
	}

	// 소수 출력
	for (auto i = v.begin(); i < v.end(); i++)
		cout << *i << " ";

	return 0;
}