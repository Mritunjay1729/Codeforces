#include <iostream>
#include <set>

using namespace std;

bool LCS(string a, string b) {
    int m = a.length();
    int n = b.length();
    int dp[m+1][n+1] = {0};
    
    for(int i=1; i <= m; i++) {
        for(int j=1; j <= n; j++) {
            if(a[i-1] == b[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return (dp[m][n]==b.length());
}



int main() {
    int alphabet[26] = {0};
    string a, b;
    cin >> a >> b;
    if(a.length() < b.length()) {cout << "need tree" << endl; exit(0);}
    set<char> word;
    for(auto chr : a) alphabet[chr-'a']++;
    for(auto chr : b) alphabet[chr-'a']--;
    int zero=0;
    for(auto count : alphabet) {
        if(count < 0) {cout << "need tree" << endl; exit(0);}
        else if(count == 0) zero++;
    } 
    if(zero == 26) {cout << "array" << endl; exit(0);}

    if(LCS(a, b)) cout << "automaton" << endl;
    else cout << "both" << endl;
    return 0;
}