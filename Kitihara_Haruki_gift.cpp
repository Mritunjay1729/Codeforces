#include <iostream>
#include <vector>

using namespace std;

bool subsetSum(vector<int> &apples, int sum) {
    int n = apples.size();
    vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
    for(int j=0; j <=sum; j++) dp[0][j] = false;
    for(int i=0; i <=n; i++) dp[i][0] = true;

    for(int i=1; i <= n; i++) {
        for(int j=1; j<=sum; j++) {
            if(apples[i-1] <= j) {
                dp[i][j] = dp[i-1][j-apples[i-1]]+dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main() {
    int n, weight=0, kitihara=0, touma=0;
    cin >> n;
    vector<int> apples;
    int sum = 0;
    for(int i=0; i < n; i++) {
        cin >> weight;
        sum+=weight;
        apples.push_back(weight);
    }
    if(weight%2==1) printf("NO\n");
    else {
        subsetSum(apples, sum/2)==true?printf("YES\n"):printf("NO\n");
    }
    return 0;
}