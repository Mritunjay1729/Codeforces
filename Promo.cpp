#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, t;
    cin >> n >> t;
    vector<ll> price(n);
    ll sum = 0, p;
    for(ll i=0; i < n; i++) {cin >> price[i];}
    sort(price.begin(), price.end(), greater<ll>());
    for(ll i=0; i < n; i++) {
        sum+=price[i];
        price[i] = sum;
    }

    ll x, y;
    while(t--) {
        cin >> x >> y;
        if(x == y) cout << price[x-1] << endl;
        else cout << price[x-1] - price[x-y-1] << endl;
    }
    return 0;
}