#include <string>
#include <vector>
#include <queue>

using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/142085
int 디펜스게임_Greedy(int n, int k, vector<int> enemy) {
    if (k >= enemy.size()) return enemy.size();
    int answer = k;
    priority_queue<int> muguk;
    for (int i = 0; i < k; i++) {
        muguk.push(-enemy[i]);
    }
    int index = k;
    while (n >= 0) {
        if (index == enemy.size() - 1) return enemy.size();
        if (-muguk.top() > enemy[index]) {
            n -= -muguk.top();
            muguk.pop();
            muguk.push(-enemy[index]);
        }
        else {
            n -= enemy[index];
        }
        index++;
        answer++;
    }
    
    return answer - 1;
}