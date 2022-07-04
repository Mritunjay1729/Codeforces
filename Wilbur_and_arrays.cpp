#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    ll count = 0;
    count += abs(arr[0]);
    for(int i=1; i < n; i++) count+=abs(arr[i]-arr[i-1]);
    cout << count << endl;;
    return 0;
}