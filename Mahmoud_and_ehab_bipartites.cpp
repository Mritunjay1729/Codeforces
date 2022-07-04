#include <iostream>
#include <vector>
#include <queue>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin >> n;
    ll x, y;
    vector<ll> group(n+1, -1);
    queue<pair<ll,ll>> waiting;
    cin >> x >> y;
    group[x] = 0;
    group[y] = 1;
    for(ll i=2; i < n; i++) { 
        cin >> x >> y;
        if(group[x] != -1) group[y] = !group[x];
        else if(group[y] != -1) group[x] = !group[y];
        else waiting.push({x, y});
    }
    pair<ll, ll> current;
    while(!waiting.empty()) {
        current = waiting.front();
        waiting.pop();
        if(group[current.first] != -1) group[current.second] = !group[current.first];
        else if(group[current.second] != -1) group[current.first] = !group[current.second];
        else waiting.push(current);
    }
    ll count = 0;
    for(auto gr : group) if(gr==1) count++;
    cout << count*(n-count)-(n-1) << endl;
}