#include <iostream>
#include <set>

using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int t;
    cin >> t;
    int n, s, k, cl;
    set<int> closed;
    while(t--) {
        closed.clear();
        cin >> n >> s >> k;
        for(int i=0; i < k; i++) {
            cin >> cl; 
            closed.insert(cl);
        }
        for(int i=0; i <= k; i++) {
            if((s+i <= n && closed.find(s+i) == closed.end()) ||
             (s-i > 0 && closed.find(s-i) == closed.end())) {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}