#include <iostream>
#include <vector>
#include <map>
#define ll long long int
#define fl(n) for(int i=0; i < n; i++)
#define pr pair<int, int>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, k;
    cin >> n >> m >> k;
    map<pr, int> roads;
    set<int> storage;

    int x, y, road;
    fl(m) {
        cin >> x >> y >> road;
        if(roads.find({x, y}) == roads.end()) {roads[{x, y}] = road;}
        else {roads[{x, y}] = min(roads[{x, y}], road);}
    }
    int c;
    fl(k) {cin >> c; storage.insert(c);}

    // for(auto c : city) cout << c << " "; cout << endl;
    // for(auto s : storage) cout << s << " "; cout << endl;
    // cout << "Roads" << endl;
    // for(auto road: roads) {
    //     printf("(%d,%d) => %d\n", road.first.first, road.first.second, road.second);
    // }
    if(k == 0) {cout << "-1\n"; exit(0);}
    int min_cost = INT32_MAX;
    for(auto road: roads) {
        pr path = road.first;
        if((storage.find(path.first) != storage.end())^(storage.find(path.second)!=storage.end())) {
            if(roads[path] != 0) min_cost = min(min_cost, roads[path]);
            else min_cost = min(min_cost, roads[{path.second,path.first}]);
        }
    }
    if(min_cost == INT32_MAX) cout << "-1" << endl;
    else cout << min_cost << endl;
    return 0;
}