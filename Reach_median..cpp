#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(ll i=0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int med = n/2;
    ll steps;
    steps = abs(k-arr[med]);
    for(int i=0; i < med; i++) if(arr[i] > k) steps+=arr[i]-k;
    for(int i=med+1; i < n; i++) if(arr[i] < k) steps+=k-arr[i];
    cout << steps << endl;
    return 0;
}