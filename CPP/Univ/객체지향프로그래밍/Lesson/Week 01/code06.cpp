#include <iostream>
#include <cmath>

const int MIN = 0;
const int MAX = 360;
const int STEP = 10;

using namespace std;

int main() {
    double radian, pi, value;
    pi = 4.0 * atan(1.0);   // tan(pi/4) = 1.0
    cout << "Angle : Sine" << endl;
    for (int degree = MIN; degree <= MAX; degree += STEP) {
        radian = pi*(degree/180.0);   // 180으로 나누게 되면 올바른 값 나오지 않음
        value = sin(radian);
        cout << degree << " : " << value << endl;
    }
    return 0;
}