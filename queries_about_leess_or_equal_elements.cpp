#include <iostream>
#include <vector>
#define fl(n) for(int i=0; i < n; i++)
#define ll long long int
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll m, n;
    cin >> m >> n;
    vector<ll> arr(m), sarr(n);
    fl(m) cin >> arr[i];
    fl(n) cin >> sarr[i];
    sort(arr.begin(), arr.end());

    for(ll i=0; i < sarr.size(); i++) {
        ll l = 0, r = arr.size()-1, mid;
        while(l < r) {
            mid = l+(r-l)/2;
            if(arr[mid] <= sarr[i]) l = mid+1;
            else if(arr[mid] > sarr[i]) r = mid;
        }
        if(arr[r] <= sarr[i]) r++;
        cout << r << " ";
    }
    cout << endl;
    return 0;
}