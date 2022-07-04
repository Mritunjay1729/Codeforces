#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, p;
    cin >> p >> n;
    int max_votes = 0, win_cand;
    vector<int> city(p);
    vector<int> win_cands(p, 0);
    while(n--) {
        max_votes = 0;
        for(int i=0; i < p; i++) {
            cin >> city[i];
            max_votes = max(max_votes, city[i]);
        }
        for(int i=0; i < p; i++) {
            if(city[i] == max_votes) {
                win_cands[i]++; 
                break;
            }
        }
    }

    int win_votes = 0, winner = 0;
    for(int i=0; i < p; i++) {
        if(win_votes < win_cands[i]) {
            win_votes = win_cands[i];
            winner = i+1;
        }
    }
    printf("%d\n", winner);
    return 0;
}