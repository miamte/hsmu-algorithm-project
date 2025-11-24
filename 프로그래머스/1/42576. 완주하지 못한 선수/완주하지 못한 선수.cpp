#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    // 1. 두 배열 정렬
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    // 2. 앞에서부터 비교
    for (int i = 0; i < completion.size(); i++) {
        if (participant[i] != completion[i]) {
            return participant[i]; // 처음으로 다른 사람 = 완주 못한 사람
        }
    }
    
    // 3. 모두 같다면 마지막 참가자가 완주 못함
    return participant.back();
}
