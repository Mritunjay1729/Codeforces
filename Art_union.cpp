#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> dp(n+1, vector<int>(m+1)), time(n+1, vector<int>(m+1));
    for(int i=1; i <= n; i++) {
        for(int j=1; j <= m; j++) {
            cin >> time[i][j];
        }
    }

    int t = 0;
    for(int j=1; j <=m; j++) {t+=time[1][j]; dp[1][j] = t;}
    t = 0;
    for(int i=1; i <= n; i++) {t+=time[i][1]; dp[i][1] = t;}
    for(int i=2; i <= n; i++) {
        for(int j=2; j <= m; j++) {
            dp[i][j] = time[i][j] + max(dp[i-1][j], dp[i][j-1]);
        }
    }

    for(int i=1; i <= n; i++) cout << dp[i][m] << " ";
    cout << endl;
    return 0;
}