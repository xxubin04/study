#include <iostream>
#include <string>
#include <vector>

using namespace std;
// ������ ���ͷ����Ϳ� erase �Լ� ���

int main() {
	int n = 0;
	int cnt = 0;
	int num = 0;
	vector<int> v;
	int array_size = 0;

	cin >> n;

	// 2���� n������ �� vector�� ����
	for (int i = 2; i <= n; i++)
		v.push_back(i);

	// ����� ��쿡�� ���� ����� ���� iterator�� ���� 
	for (auto i = v.begin(); i < v.end(); i++) {
		for (auto j = v.begin(); j < v.end();) {
			if (*j % *i == 0 && *j != *i) {
				j = v.erase(j);
			}
			else {
				j++;  // ����� �ƴ� ��쿡�� ���� iterator�� �̵�
			}
		}
	}

	// �Ҽ� ���
	for (auto i = v.begin(); i < v.end(); i++)
		cout << *i << " ";

	return 0;
}