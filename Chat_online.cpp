#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    vector<int> time(1002, 0);
    int x, y;
    for(int i=0; i < p; i++) {
        cin >> x >> y;
        time[x]++;
        time[y+1]--;
    }

    vector<pair<int, int>> Z;
    for(int i=0; i < q; i++) {
        cin >> x >> y;
        Z.push_back({x, y});
        if(l+x <= 1000) time[l+x]++;
        if(l+y+1 <= 1001) time[l+y+1]--;
    }

    for(int i=1; i < 1002; i++) time[i]+=time[i-1];
    int count = 0, ans = 0;
    for(int i=0; i < 1001; i++) {if(time[i] == 2) count++;}
    if(count > 0) ans++;
    for(int i=1; i < r-l+1; i++) {
        for(int j=0; j < Z.size(); j++) {
            x = Z[j].first;
            y = Z[j].second;
            if(l+x+i-1 <= 1000) {
                if(time[l+x+i-1] == 2) count--;
                time[l+x+i-1]--;
            }
            if(l+y+i <= 1000 ) {
                time[l+y+i]++;
                if(time[l+y+i] == 2) count++;
            }
        }
        if(count > 0) ans++;
    }
    cout << ans << endl;
    return 0;
}