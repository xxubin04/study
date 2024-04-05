#include <iostream>
#include <string>   // 문자열은 string 데이터타입인데 사용하기 위해서 string 헤더파일 include 해야함

using namespace std;
const int MAX = 100;

int main() {
    string words[MAX];

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> words[i];
    
    string str1, str2;
    cin >> str1 >> str2;

    for (int i = 0; i < n; i++) {
        if (words[i] >= str1 && words[i] <= str2) { // 문자열끼리도 크다, 작다, 같다 적용할 수 있다. (사전식 순서)
            cout << words[i] << endl;
        }
    }
    return 0;
}

