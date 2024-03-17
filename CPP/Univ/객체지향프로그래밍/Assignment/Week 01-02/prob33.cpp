
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
const int MAX = 100;

int shift(int dx, int dy, int N, int visited[][101]);

int main() {
    srand((unsigned int) time(NULL));

    int N;
    cin >> N;

    int count = 0;
    for (int i = 0; i < 10000; i++) {
        int visited[101][101] = {0};
        if (shift(N / 2, N / 2, N, visited)) {
            count++;
        }
    }

    double probability = (double) count / 10000;
    cout << probability << endl;

    return 0;
}

int shift(int dx, int dy, int N, int visited[][101]) {
    int x = dx, y = dy;
    visited[x][y] = 1;

    while (true) {
        bool canMove[4] = {false};  

        if (x > 0 && visited[x-1][y] == 0) 
            canMove[0] = true;  
        if (x < N - 1 && visited[x+1][y] == 0) 
            canMove[1] = true;   
        if (y > 0 && visited[x][y-1] == 0) 
            canMove[2] = true;  
        if (y < N - 1 && visited[x][y+1] == 0) 
            canMove[3] = true;   

        if (!(canMove[0] || canMove[1] || canMove[2] || canMove[3])) {
            return 0;
        }

        int direction;
        do {
            direction = rand() % 4; 
        } while (!canMove[direction]);

        int newX = x, newY = y;
   
        if (direction == 0) 
            newX = x - 1; 
        else if (direction == 1) 
            newX = x + 1;  
        else if (direction == 2) 
            newY = y - 1;   
        else if (direction == 3) 
            newY = y + 1;   

        if (newX == 0 || newX == N - 1 || newY == 0 || newY == N - 1) {
            return 1;
        }

        x = newX;
        y = newY;
        visited[x][y] = 1;
    }

    return 0;
}