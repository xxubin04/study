#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int start, end;
    pair<int, int> gap[n];

    for (int i = 0; i < n; ++i) {
        cin >> start >> end;
        gap[i] = make_pair(start, end);
    }

    sort(gap, gap + n);

    for (int i = 0; i < n; ++i) 
        cout << gap[i].first << " " << gap[i].second << endl;

    return 0;
}