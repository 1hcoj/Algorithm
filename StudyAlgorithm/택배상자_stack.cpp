#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> order) {
    int answer = 1;
    int before_order = order[0];
    int index = 0;
    for (int i = 1; i < order.size(); i++) {
        if (before_order < order[i]) answer++;
        else {index = i-1; break;}
        before_order = order[i];
    }
    vector<int> new_order(order.begin() + index, order.end());
    sort(new_order.begin() + index, new_order.end(), [](int a, int b) {
        return a > b;
        });
    for (int i = 0; i < new_order.size(); i++) {
        if (new_order[i] == order[index+i]) answer++;
        else break;
    }
    return answer;
}