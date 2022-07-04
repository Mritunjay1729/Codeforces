#include <iostream>
#include <bits/stdc++.h>

#define ll unsigned long long

using namespace std;

int main() {
    ll n, c, total  = 0;
    cin >> n;
    vector<int> cost;
    while(n--) {
        cin >> c;
        cost.push_back(c);
        total += c;
    }

    sort(cost.begin(), cost.end(), greater<int>());
    
    ll m, coupons;
    cin >> m;
    while(m--) {
        cin >> coupons;
        cout << total-cost[coupons-1] << endl;
    }
    return 0;
}