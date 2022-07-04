#include <iostream>
#include <vector>
#include <cmath>
#define ll long long int

using namespace std;

vector<ll> parent(51, -1);

ll find(ll n) {
    if(parent[n] < 0) return n;
    else return find(parent[n]);
}

void Union(ll m, ll n) {
    ll pm = find(m);
    ll pn = find(n);
    if(pm == pn) return;
    else if(parent[pm] <= parent[pn]) {
        parent[pm]+=parent[pn];
        parent[pn] = pm;
    }else{
        parent[pn]+=parent[pm];
        parent[pm] = pn;
    }
}

int main() {
    ll n, q;
    cin >> n >> q;
    ll x, y;
    while(q--) {
        cin >> x >> y;
        Union(x, y);
    }

    // for(ll i=1; i <= n; i++) printf("(%d, %d) ", i, parent[i]);
    // cout << endl;
    ll sum = 1;
    for(ll i=1; i <= n; i++) {
        if(parent[i] < 0) sum*=pow(2, abs(parent[i])-1);
    }
    cout << sum << endl;
    return 0;
}