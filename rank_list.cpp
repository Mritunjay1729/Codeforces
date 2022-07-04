#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map<int, map<int, int>> ranks;
    int score, penalty;
    while(n--) {
        cin >> score >>penalty;
        ranks[score][penalty]+=1;
    }

    int count = 0;
    for(auto rank = ranks.rbegin(); rank != ranks.rend(); rank++) {
        for(auto team : rank->second) {
            if(count + team.second >= k) {printf("%d\n", team.second); exit(0);}
            else count += team.second;
        }
    }
    return 0;
}