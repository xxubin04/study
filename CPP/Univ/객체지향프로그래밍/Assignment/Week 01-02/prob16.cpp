#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int chance = 1000000;
    double total_6 = 0, total_12 = 0;

    srand((unsigned int) time(NULL));

    for (int i = 0; i < chance; i++) {
        int count_6 = 0, count_12 = 0;

        for (int j = 0; j < 6; j++) {
            if (rand() % 6 + 1 == 1) 
                count_6++;
        }
        if (count_6 == 0)
                total_6++;

        for (int j = 0; j < 12; j++) {
            if (rand() % 6 + 1 == 1) 
                count_12++;      
        }
        if (count_12 < 2)
                total_12++; 
    }

    cout << 1 - (total_6 / chance) << " " << 1 - (total_12 / chance) << endl;

    return 0;
}