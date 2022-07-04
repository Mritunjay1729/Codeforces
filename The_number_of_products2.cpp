#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin >> n;
    vector<vector<ll>> dp(n+1, vector<ll>(2, 0));
    vector<ll> arr(n);
    for(ll i=0; i < n; i++) cin >> arr[i];
    

    //0 for number of negatives ending at particular index, 1 for number of pos for the same
    if(arr[0] > 0) {dp[0][1] = 1; dp[0][0] = 0;}
    else {dp[0][0] = 1; dp[0][1] = 0;}

    for(ll i=1; i < n; i++) {
        if(arr[i] > 0) {
            dp[i][0] = dp[i-1][0];
            dp[i][1] = 1+dp[i-1][1];
        }else{
            dp[i][0] = 1+dp[i-1][1];
            dp[i][1] = dp[i-1][0];
        }
    }

    ll pos, neg;
    pos = neg = 0;
    for(ll i=0; i < n; i++) {pos+=dp[i][1]; neg+=dp[i][0];}
    cout << neg << " " << pos << endl;
    return 0;
}