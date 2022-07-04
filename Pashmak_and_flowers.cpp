#include <iostream>
#include <vector>
#define fl(n) for(int i=0; i < n; i++)
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

using namespace std;

int main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin >> n;
    vector<ll> beauty(n);
    ll mx = 0, mn = INT32_MAX;
    fl(n) {cin >> beauty[i]; mx = max(mx, beauty[i]); mn = min(mn, beauty[i]);}
    ll max_count, min_count;
    max_count = min_count = 0;
    fl(n) {
        if(beauty[i] == mx) max_count++;
        else if(beauty[i] == mn) min_count++; 
    }
    ll count;
    if(mx == mn) count = (n*(n-1))/2;
    else count = max_count * min_count;
    cout << mx-mn << " " << count << endl;
    return 0;
}