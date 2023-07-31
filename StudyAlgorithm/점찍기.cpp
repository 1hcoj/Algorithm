#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long Á¡Âï±â(int k, int d) {
    long long answer = 0;
    int a = 0, b = 0;
    for (a = 0; a * k > d; a++) {
        int max_y = floor(sqrt(pow(d, 2) - pow(a * k, 2)));
        if (max_y > 0) answer += max_y;
        answer++;
    }
    return answer;
}