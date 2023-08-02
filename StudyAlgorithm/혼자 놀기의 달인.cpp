#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> cards) {
    int answer = 0;
    cards.insert(cards.begin(), 0);
    priority_queue<int> q;
    vector<int> visited(cards.size(),0);
    for (int i = 1; i < cards.size(); i++) {
        int next_box = cards[i];
        if (!visited[next_box]) {
            // ���ο� ����Ŭ ����
            int size = 0;
            while (!visited[next_box]) {
                // ����Ŭ�� ũ�� ++
                size++;
                // ����Ŭ�� �߰�
                visited[next_box] = 1;
                // next_box ����
                next_box = cards[next_box];
            }
            q.push(size);
        }
    }
    if (q.size() >= 2) {
        int a = q.top(); q.pop();
        int b = q.top(); q.pop();
        answer = a * b;
    }
    
    return answer;
}