#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int 숫자카드_나누기(vector<int> arrayA, vector<int> arrayB) {
    int answer = 0;
    int min_a = *min_element(arrayA.begin(), arrayA.end());
    int i = 1;
    for (; min_a > 1;) {
        int num = 0;
        for (int a : arrayA) {
            if (a % min_a != 0) break;
            num++;
        }
        if (num == arrayA.size()) {
            int num_2 = 0;
            for (int b : arrayB) {
                if (b % min_a == 0) break;
                num_2++;
            }
            if (num_2 == arrayB.size()) answer = min_a;
        }
        
    }
    return answer;
}