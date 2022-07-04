#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, badge;
    cin >> n;
    set<int> ranks;    
    vector<int> badges;
    for(int i=0; i < n; i++) {
        cin >> badge;
        if(ranks.find(badge) == ranks.end()) ranks.insert(badge);
        badges.push_back(badge);
    }
    sort(badges.begin(), badges.end());
    int prev = badges[0], start = badges[0]+1;
    int cost = 0;
    for(int i=1; i < badges.size(); i++) {
        if(badges[i] == prev) {
            while(start <= badges[i] || ranks.find(start) != ranks.end()) start++;
            cost += start-badges[i];
            // cout << start << endl;
            start++;
        }else{
            prev = badges[i];
        }
    }
    cout << cost << endl;
    return 0;
}