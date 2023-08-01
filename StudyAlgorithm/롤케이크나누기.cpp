#include <string>
#include <vector>
#include <map>
using namespace std;

int 롤케이크자르기_MAP(vector<int> topping) {
    int answer = 0;
    map<int, int> lefts; lefts.insert({ topping[0],1 });
    map<int, int> rights;
    for (int i = 1; i < topping.size(); i++) {
        rights[topping[i]]++;
    }
    for (int i = 1; i < topping.size(); i++) {
        lefts[topping[i]]++;
        if (--rights[topping[i]] == 0) {
            rights.erase(topping[i]);
        }
        if (lefts.size() == rights.size()) answer++;
        if (lefts.size() > rights.size()) break;
    }
    return answer;
}