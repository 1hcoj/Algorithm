#include <string>
#include <vector>
#include <queue>
using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/132266

vector<int> ºÎ´ëº¹±Í(int n, vector<vector<int>> roads, vector<int> sources, int destination) {
    vector<int> answer;
    vector<vector<int>> adj(n+1);
    vector<int> distances(n+1, -1);
    for (vector<int> road : roads) {
        int a = road[0], b = road[1];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    queue<int> q;
    q.push(destination);
    distances[destination] = 0;
    while (!q.empty()) {
        int here = q.front();
        q.pop();
        for (int there : adj[here]) {
            if (distances[there] == -1) {
                q.push(there);
                distances[there] = distances[here] + 1;
            }
        }
    }
    for (int source : sources) {
        answer.push_back(distances[source]);
    }
    return answer;
}