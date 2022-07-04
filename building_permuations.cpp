#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, num;
    cin >> n;
    vector<ll> left;
    vector<ll> arr2(n, 0);
    for(int i=0; i < n; i++) {
        cin >> num;
        if(num > 0 && num < n && arr2[num-1] != 1) arr2[num-1] = 1;
        else left.push_back(num);
    }

    // for(int i=0; i < n; i++) cout << i+1 << " " << arr2[i] << endl;
    // cout << endl;

    ll j=0;
    sort(left.begin(), left.end());
    ll sum=0;
    for(int i=0; i < n; i++) {
        if(arr2[i] == 0) {
            sum+=abs(i+1-left[j++]);
        }
    }
    cout << sum << endl;
    return 0;
}