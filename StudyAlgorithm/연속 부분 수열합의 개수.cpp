#include <string>
#include <vector>
#include <set>
using namespace std;

int 연속_부분_수열합의_개수(vector<int> elements) {
    int answer = 0;
    set<int> s;
    for (int i = 1; i <= elements.size(); i++) {
        for (int j = 0; j < elements.size(); j++) {
            int sum = 0;
            for (int k = 0; k < i; k++) {
                sum += elements[(j + k) % elements.size()];
            }
            s.insert(sum);
        }
    }
    answer = s.size();
    return answer;
}




int 연속_부분_수열합의_개수_Update(vector<int> elements) {
    return 0;
}