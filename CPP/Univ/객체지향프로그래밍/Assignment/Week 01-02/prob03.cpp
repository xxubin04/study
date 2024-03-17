#include <iostream>

using namespace std;

int main() {   // 분모를 계산하지 않고도 결과값을 낼 수 있음
    long n;    // 정수 overflow를 피할 수 있는 방법 고민해보기
    int num = 1;
    double ans = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        ans += 1.0 / (num * i);
        num *= i;
    }

    cout << ans;

    return 0;
}