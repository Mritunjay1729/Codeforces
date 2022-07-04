#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
#define IO_error ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
    IO_error;

    ll n;
    cin >> n;
    vector<int> arr(n);
    ll sum = 0;
    for(int i=0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
    } 
    sort(arr.begin(), arr.end());
    ll res = n==1?sum:2*sum;
    for(int i=0; i < n-2; i++) {
        sum-=arr[i];
        res+=sum;
    }
    cout << res << endl;
    return 0;
}