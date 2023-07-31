#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int tmp = i;
        int j = i;
        while (j >= 10) {
            tmp += j % 10;
            j /= 10;
        }
        tmp += j;
        if (tmp == n) {
            cout << i; break;
        }
        else if (i == n - 1) cout << 0;
    }
}