#include <string>
#include <vector>
#include <math.h>
using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/134239

vector<double> 우박수열_정적분(int k, vector<vector<int>> ranges) {
    vector<double> answer;
    vector<double> vec;
    int x = 0;
    vec.push_back(0);
    while (k != 1) {
        int before_k = k;
        if (k % 2 == 0) k /= 2;
        else k = k * 3 + 1;
        vec.push_back((k + before_k) / 2.0 + vec[x]);
        x++;
    }
    for (vector<int> range : ranges) {
        int a = range[0], b = vec.size() - 1 + range[1];
        if (b == a) answer.push_back(0);
        else if (b < a) answer.push_back(-1.0);
        else {
            answer.push_back(vec[b] - vec[a]);
        }
    }
    return answer;
}