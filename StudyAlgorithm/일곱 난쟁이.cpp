#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ÀÏ°ö³­ÀïÀÌ() {
    int num = 9;
    int sum = 0;
    int a = -1, b = -1;
    vector<int> heights(num);
    for (int i = 0; i < 9; i++) {
        cin >> heights[i];
        sum += heights[i];
    }
    sort(heights.begin(), heights.end());

    for (int i = 0; i < num - 1; i++) {
        for (int j = i + 1; j < num; j++) {
            int temp = sum;
            temp -= (heights[i] + heights[j]);
            if (temp == 100) {
                a = i; b = j;
                break;
            }
        }
        if (a != -1) break;
    }
    for (int i = 0; i < num; i++) {
        if (i != a && i != b) {
            cout << heights[i] << '\n';
        }
    }
}