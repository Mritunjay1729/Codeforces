#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define fl(n) for(int i=0; i < n; i++)

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> clothes(n);
    fl(n) cin >> clothes[i];
    map<int, vector<int>> pairs;
    int x, y;
    fl(m) {
        cin >> x >> y;
        pairs[x].push_back(y);
        pairs[y].push_back(x);
    }

    int price = INT32_MAX;
    for(auto pair : pairs) {
        for(auto s : pair.second) {
            if(s == pair.first) continue;
            else {
                for(auto t : pairs[s]) {
                    if(t == pair.first) continue;
                    if(binary_search(pairs[t].begin(), pairs[t].end(), pair.first)) 
                        price = min(price, clothes[pair.first-1]+clothes[s-1]+clothes[t-1]);
                }
            } 
        }
    }
    if(price == INT32_MAX) cout << -1 << endl;
    else cout << price << endl;
    return 0;
}