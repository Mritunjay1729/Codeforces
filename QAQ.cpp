#include <iostream>

using namespace std;
int dp[101][4] = {0};

int number_of_matches(string a, string b) {
    int m, n;
    m = a.length();
    n = b.length();
    for(int j=0; j < n; j++) dp[0][j] = 0;
    for(int i=0; i < m; i++) dp[i][0] = 1;

    for(int i=1; i <= m; i++) {
        for(int j=1; j <= n; j++) {
            if(a[i-1] == b[j-1]) {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[m][n];
}

int main() {
    string str;
    cin >> str;
    cout << number_of_matches(str, "QAQ");
    return 0;
}