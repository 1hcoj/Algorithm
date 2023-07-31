#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int ±Ö°í¸£±â(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> gyuls;
    for (int gyul : tangerine) {
        auto item = gyuls.find(gyul);
        if (item == gyuls.end()) { gyuls.insert({ gyul,1 }); }
        else item->second++;
    }
    vector<pair<int, int>> vec(gyuls.begin(), gyuls.end());
    sort(vec.begin(), vec.end(), [](pair<int, int> item1, pair<int, int>item2) {
        return item1.second > item2.second;
        });
    for (int i = 0; k > 0; i++) {
        k -= vec[i].second;
        answer++;
    }
    return answer;
}