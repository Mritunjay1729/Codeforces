#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    map<pair<int, int>, bool> active;
    vector<pair<int, int>> obelisk;
    vector<pair<int, int>> clues;
    int x, y;
    for(int i=0; i < n; i++)  {
        cin >> x >> y;
        obelisk.push_back({x, y});
    }

    for(int i=0; i < n; i++) {
        cin >> x >> y;
        clues.push_back({x, y});
        active[clues[i]] = 0;
    }

    // cout << endl;
    int tx, ty, px, py, count = 0;
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            tx = obelisk[i].first+clues[j].first;
            ty = obelisk[i].second+clues[j].second;
            count = 0;
            for(int k=0; k < n; k++) {
                if(k == i) continue;
                px = tx-obelisk[k].first;
                py = ty-obelisk[k].second;
                // cout << px << " " << py << endl;
                if(active.find({px, py}) != active.end()) {
                    if(active[{px, py}] != 1) {
                        active[{px, py}] = 1;
                        count++;
                    } else {
                        for(auto &ax : active) ax.second=0;
                        break;
                    }
                } else break;
            }
            if(count == n-1) {printf("%d %d\n", tx, ty); exit(0);}
        }
    }
    return 0;
}