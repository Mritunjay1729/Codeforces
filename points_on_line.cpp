#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, k;
    cin >> n >> k;
    ll count = 0;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    ll j = 0;
    for(int i=0; i < n; i++) {
        j+=1;
        while(j < n && arr[j]-arr[i] <= k) j++;
        j--;
        ll m = j-i;
        count+=(m*(m-1))/2;
    }
    cout << count << endl;
    return 0;
}