#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> dp(2000, vector<int>(101, -1));

int maxDistance(int curr, int vf, int t, int d) {
    if(curr < 0) return -10000;
    if(t==0  && curr == vf) return vf;
    else if(t == 0) return -10000;
    if(dp[curr][t] != -1) return dp[curr][t];
    int ans = -10000;
    for(int i=curr+d; i >= curr-d; i--) {
        if(i-d*t > vf) continue;
        ans = max(ans, curr+maxDistance(i, vf, t-1, d));
    }
    dp[curr][t] = ans;
    return ans;
}

int main() {
    int vi, vf, t, d;
    cin >> vi >> vf >> t >> d;
    cout << maxDistance(vi, vf, t-1, d) << endl;
    return 0;
}