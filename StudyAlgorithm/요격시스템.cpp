//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<vector<int>> targets) {
//    int answer = 0;
//    vector<vector<int>> sections;
//    for (vector<int> target : targets) {
//        if (sections.empty()) sections.push_back(target);
//        else {
//            bool toggle = true;
//            for (vector<int>& section : sections) {
//                if (target[0] <= section[0] && target[1] >= section[1]) {
//                    toggle = false;
//                    break;
//                }
//                else if (target[0] >= section[0] && target[1] <= section[1]) {
//                    section = target; 
//                    toggle = false;
//                    break;
//                }
//                else if (target[0] >= section[0]) {
//                    section = { target[0],section[1] };
//                    toggle = false;
//                    break;
//                }
//                else if (target[1] <= section[1]) {
//                    section = { section[0],target[1] };
//                    toggle = false;
//                    break;
//                }
//            }
//            if (toggle) sections.push_back(target);
//        }
//    }
//    answer = sections.size();
//    return answer;
//}