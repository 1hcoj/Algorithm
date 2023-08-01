#include <string>
#include <vector>
#include <queue>

using namespace std;

int 광물캐기(vector<int> picks, vector<string> minerals) {
    int answer = 0;
    int pick_num = 0;
    priority_queue<pair<int,int>> scores;
    for (int pick : picks) {
        pick_num += pick;
    }
    for (int i = 0; i < pick_num * 5 && i < minerals.size(); i += 5) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            if (i + j < minerals.size()) {
                if (minerals[i + j] == "diamond") sum += 1;
                else if (minerals[i + j] == "stone") sum -= 1;
            }
            else {
                break;
            }
        }
        scores.push({ sum,i });
    }
    while (!scores.empty()) {
        pair<int, int> score = scores.top(); scores.pop();
        int index = score.second;
        int pick = -1;
        for (int k = 0; k < 3; k++) {
            if (picks[k]) {
                pick = k;
                picks[k]--;
                break;
            }
        }
        for (int i = index; i < minerals.size() && i < index + 5; i++) {
            if (minerals[i] == "diamond") {
                answer += pow(5, pick);
            }
            else if (minerals[i] == "iron") {
                pick = (pick == 0) ? pick : pick - 1;
                answer += pow(5, pick);
            }
            else {
                answer += 1;
            }
        }
    }
    return answer;
}
