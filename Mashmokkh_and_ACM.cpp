#include <iostream>
#include <cstring>
#define ll long long int

using namespace std;

ll dp[2020][2020];

ll count(int n, int k, int curr) {
    if(k == 1) return 1;
    if(curr > n) return 0;
    if(dp[curr][k] != -1) return dp[curr][k]%(1000000007);
    
    dp[curr][k] = 0;
    for(int i=curr; i <= n; i+=curr) {
        dp[curr][k] += count(n, k-1, i)%(1000000007);
    }
    return dp[curr][k]%(1000000007);
}

int main() {
    memset(dp, -1, sizeof(dp));
    int n, k;
    cin >> n >> k;
    count(n, k, 3);
    for(int i=1; i <= n; i++) dp[i][k] = count(n, k, i);
    ll sum = 0;
    for(int i=1; i <= n; i++) {sum+=dp[i][k]%(1000000007);}
    cout << sum%(1000000007) << endl;
    return 0;
}