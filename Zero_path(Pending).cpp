#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> path(1001, vector<int>(1001));

bool searchPath(int n, int m, int i, int j, int sum) {
    if(i == n && j == m) {
        if(sum+path[i][j] == 0) return true;
        else return false;
    }

    bool ans = false;
    sum+=path[i][j];
    if(i < n && j < m) {
        if(abs(sum+path[i+1][j]) < abs(sum+path[i+1][j])) {
            ans |= searchPath(n, m, i+1, j, sum);
        } else if(abs(sum+path[i+1][j]) > abs(sum+path[i+1][j])){
            ans |= searchPath(n, m, i, j+1, sum);
        }else{
            ans |= (searchPath(n, m, i+1, j, sum) | searchPath(n, m, i, j+1, sum));
        }
    }else if(i < n) ans |= searchPath(n, m, i+1, j, sum);
    else if(j < m) ans |= searchPath(n, m, i, j+1, sum);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    int n, m;
    while(t--) {
        cin >> n >> m;
        for(int i=1; i <= n; i++) {
            for(int j=1; j <= m; j++) {
                cin >> path[i][j];
            }
        }
        if(searchPath(n, m, 1, 1, 0)) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}