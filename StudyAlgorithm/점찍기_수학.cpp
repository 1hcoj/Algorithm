#include <string>
#include <vector>
#include <math.h>
using namespace std;

// https://school.programmers.co.kr/learn/courses/30/lessons/140107

long long �����(int k, int d) {
    long long answer = 0;
    int a = 0, b = 0;
    for (a = 0; a * k > d; a++) {
        /* ���� ����Ͽ� x,y �� �ϳ��� ������ Ư�� -> for ���� �ϳ��� �����*/
        int max_y = floor(sqrt(pow(d, 2) - pow(a * k, 2)));
        if (max_y > 0) answer += max_y;
        answer++;
    }
    return answer;
}