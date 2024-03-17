#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void print_term(int coef, int x_exp, int y_exp) {
    if (coef == 0) {
        cout << "0";
        return;
    }

    if (coef != 1 && coef != -1) 
        cout << coef;
    else if (coef == -1)
        cout << "-";

    if (x_exp > 0) {
        if (x_exp != 0)
            cout << "x";

        if (x_exp > 1) 
            cout << "^" << x_exp;
    }

    if (y_exp > 0) {
        if (y_exp != 0) 
            cout << "y";

        if (y_exp > 1) 
            cout << "^" << y_exp;
    }

    if (x_exp == 0 && y_exp == 0) {
        if (coef == 1 || coef == -1)
            cout << 1;
    }
}

int main() {
    int coef, x_exp, y_exp;

    cin >> coef >> x_exp >> y_exp;

    print_term(coef, x_exp, y_exp);
    cout << endl;

    return 0;
}

// #include <iostream>

// using namespace std;

// int main() {
//     int coef, expo_x, expo_y;
//     cin >> coef >> expo_x >> expo_y;

//     int variable[3] = {coef, expo_x, expo_y};

//     for (int i = 0; i < 3; i++) {
//         if (variable[i] == 0) {
//             if (i == 0) {
//                 cout << 0 << endl;
//                 return 0;
//             }
//             else {
//                 cout << "" << "";
//             }
//         }
//         else if (variable[i] == 1) {
//             if (i == 0)
//                 cout << "";
//             else if (i == 1)
//                 cout << "x";
//             else if (i == 2)
//                 cout << "y";
//         }
//         else if (variable[i] == -1) {
//             if (i == 1) 
//                 cout << "-x";
//             else if (i == 2)
//                 cout << "-y";
//         }
//         else {
//             if (i == 0) 
//                 cout << variable[i] << "";
//             else if (i == 1)
//                 cout << "x^" + variable[i];
//             else if (i == 2)
//                 cout << "y^" + variable[i];
//         }
//     }
//     cout << endl;
//     return 0;
// }