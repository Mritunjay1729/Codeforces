#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n, 0)), stat(m, vector<int>(n, 0));
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }

    vector<pair<int, int>> res;
    for(int i=0; i < m-1; i++) {
        for(int j=0; j <n-1; j++) {
            if(mat[i][j] == 1 && mat[i][j+1] == 1
              && mat[i+1][j] == 1 && mat[i+1][j+1] == 1){
                  stat[i][j]++;
                  stat[i][j+1]++;
                  stat[i+1][j]++;
                  stat[i+1][j+1]++;
                  res.push_back({i, j});
              }
        }
    }

    // cout << endl;
    // for(int i=0; i < m; i++) {
    //     for(int j=0; j<n; j++) {
    //         cout << stat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    for(int i=0; i < m; i++) {
        for(int j=0; j<n; j++) {
            if(mat[i][j] == 1 && stat[i][j] == 0) {
                printf("%d\n", -1);
                exit(0);
            }
        }
    }
    cout << res.size() << endl;
    for(int i=0; i < res.size(); i++) cout << res[i].first+1 << " " << res[i].second+1 << endl; 
    return 0;
}