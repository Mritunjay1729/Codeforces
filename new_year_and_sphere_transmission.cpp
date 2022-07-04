#include <iostream>
#define ll long long int
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin >> n;
    vector<ll> div;
    for(ll i=1; i*i <= n; i++) {
        if(n%i == 0) {
            div.push_back(i);
            if(n/i != i) div.push_back(n/i);
        }
    }


    ll count;
    vector<ll> results;
    for(auto div : div) {
        ll d = n/div;
        count=(d*(2+(d-1)*div))/2;
        results.push_back(count);
    }

    sort(results.begin(), results.end());
    for(int i=0; i < results.size(); i++) cout << results[i] << " ";
    return 0;
}