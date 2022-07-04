#include <iostream>
#include <vector>
#include <set>
#define pr pair<int, int>

using namespace std;

set<int> colors;

int count(vector<vector<pr>> &edges, int curr, int dest, int color, set<int> &visited) {
    if(curr == dest) {colors.insert(color); return 1;}
    int cnt = 0;
    visited.insert(curr);
    for(auto s : edges[curr]) {
        if(visited.find(s.first) == visited.end() &&
            colors.find(s.second) == colors.end() &&
            s.second == color) cnt+=count(edges, s.first, dest, color, visited);
    }
    visited.erase(curr);
    return cnt;
}

int count(vector<vector<pr>> &edges, int curr, int dest, set<int> &visited) {
    if(curr == dest) return 0;
    int cnt = 0;
    visited.insert(curr);
    for(auto s : edges[curr]) {
        if(colors.find(s.second) == colors.end()) 
            cnt+=count(edges, s.first, dest, s.second, visited);
    }
    visited.erase(curr);
    return cnt;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pr>> edges(n+1,vector<pr>());
    set<int> visited;
    int x, y, c;
    for(int i=0; i < m; i++) {
        cin >> x >> y >> c;
        edges[x].push_back({y, c});
        edges[y].push_back({x, c});
    }

    int q;
    cin >> q;
    while(q--) {
        colors.clear();
        cin >> x >> y;
        cout << count(edges, x, y, visited) << endl;
    }
    return 0;
}