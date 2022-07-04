#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
#define pr pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, num;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i < n; i++) {
        cin >> num;
        arr[i] = num; 
    }

    sort(arr.begin(), arr.end());
    vector<ll> diff(n);
    ll diff_sum =0;
    for(int i=0; i < n; i++) {
        diff[i] = arr[i]-arr[0];
        diff_sum+=diff[i];
    }

    // cout << diff_sum << endl;
    ll min_diff_sum = diff_sum, ans = arr[0];
    for(int i=1; i <n; i++) {
        diff_sum += i*(arr[i]-arr[i-1]);
        diff_sum -= (n-i)*(arr[i]-arr[i-1]);
        // cout << diff_sum << endl;
        if(diff_sum < min_diff_sum) {
            min_diff_sum = diff_sum; 
            ans = arr[i];
        }else if(diff_sum == min_diff_sum && arr[i] < ans) {
            min_diff_sum = diff_sum; 
            ans = arr[i];
        }

    }
    cout << ans << endl;
    return 0;
}