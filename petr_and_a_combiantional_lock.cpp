#include <iostream>
#include <vector>

using namespace std;

int targetSum(vector<int> &arr, int sum) {
    int n = arr.size();
    int dp[n+1][sum+1];
    for(int j=0; j <= sum; j++) dp[0][j] = 0;
    for(int i=0; i<=n; i++) dp[i][0] = 1;

    for(int i=1; i <= n; i++) {
        for(int j=1; j<=sum; j++) {
            if(arr[i-1] <= j) 
                dp[i][j] = dp[i-1][j-arr[i-1]]+dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}

int main() {
    int n;
    cin >> n;
    vector<int> rotations(n);
    int sum = 0;
    for(int i=0; i < n; i++) {cin >> rotations[i]; sum+=rotations[i];}
    // cout << sum << endl;
    if(sum%2 == 1) printf("NO\n");
    else {
        int i=0;
        while(sum-360*i>=0) {
            if(targetSum(rotations,(sum-360*i)/2)) {
                printf("YES\n");
                exit(0);
            }
            i++;
        }
        printf("NO\n");
    }
}