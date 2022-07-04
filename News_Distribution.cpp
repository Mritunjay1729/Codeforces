#include <iostream>
#include <vector>

using namespace std;

int find(vector<int> &parent, int n) {
    if(parent[n] < 0) return n;
    else return find(parent, parent[n]);
}

void Union(vector<int> &parent, int a, int b) {
    int pa = find(parent, a);
    int pb = find(parent, b);
    if(pa == pb) return;
    else if(parent[pa] <= parent[pb]) {
        parent[pa]+=parent[pb];
        parent[pb] = pa;
    }else{
        parent[pb]+=parent[pa];
        parent[pa] = pb;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector<int> parent(n+1, -1);
    int g, start, t;
    for(int j=0; j < m; j++) {
        cin >> g;
        if(g > 0) {
            cin >> start;
            for(int i=1; i < g; i++) {
                cin >> t;
                Union(parent, t, start);
            }
        }
    }

    for(int i=1; i <= n; i++) {
        int p = find(parent, i);
        cout << -parent[p] << " ";
    }
    cout << endl;
    return 0;
}