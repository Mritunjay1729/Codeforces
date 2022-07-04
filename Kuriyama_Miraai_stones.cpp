#include <iostream>
#include <vector>
#define ll long long int
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#include <algorithm>

using namespace std;

int main() {
    IO;
    ll n, q;
    cin >> n;
    vector<ll> stones(n), sorted_stones(n);
    for(int i=0; i < n; i++) cin >> stones[i];
    for(int i=0; i < n; i++) sorted_stones[i] = stones[i];

    ll sum = 0;
    for(int i=0; i < n; i++) {sum+=stones[i]; stones[i]=sum;}
    sort(sorted_stones.begin(), sorted_stones.end());
    sum  = 0;
    for(int i=0; i < n; i++) {sum+=sorted_stones[i]; sorted_stones[i]=sum;} 

    cin >> q;
    ll type, l, r;
    while(q--) {
        sum = 0;
        cin >> type >> l >> r;
        if(type==1) {cout << stones[r-1]-(l>1?stones[l-2]:0) << endl;}
        else {cout << sorted_stones[r-1]-(l>1?sorted_stones[l-2]:0) << endl;}
    }
    return 0;
}