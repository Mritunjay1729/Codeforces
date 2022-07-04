#include <iostream>
#include <vector>
#include <map>
#define ll long long

using namespace std;

int find(vector<int> &parent, int n) {
    if(parent[n] < 0) return n;
    else return find(parent, parent[n]);
}

void Union(vector<int> &parent, int a, int b) {
    int fa = find(parent, a);
    int fb = find(parent, b);
    if(fa ==fb) return;
    else if(parent[fa] <= parent[fb]) {
        parent[fa]+=parent[fb];
        parent[fb] = fa;
    }else{
        parent[fb]+=parent[fa];
        parent[fa]=fb;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> charge(n);
    vector<int> parent(n, -1); 
    for(int i=0; i < n; i++) cin >> charge[i];
    int x, y;
    for(int i=0; i < m; i++) {
        cin >> x >> y;
        Union(parent, x-1, y-1);
    }

    map<int, vector<int>> grps;
    for(int i=0; i < n; i++) {
        if(parent[i] < 0) grps[i].push_back(i);
        else grps[parent[i]].push_back(i);
    }

    ll mn_charge = INTMAX_MAX, total = 0;
    for(auto grp : grps) {
        mn_charge = charge[grp.first];
        for(auto node : grp.second) {
            mn_charge = min(mn_charge, charge[node]);
        }
        total+=mn_charge;
    }
    cout << total << endl;
    return 0;
}