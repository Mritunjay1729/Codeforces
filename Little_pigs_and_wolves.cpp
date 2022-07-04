#include <iostream>
#include <vector>
#define pr pair<int, int>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<string> grid(m);
    for(int i=0; i < m; i++) cin >> grid[i];
    vector<vector<pr>> wolves(5, vector<pr>());
    int count;
    for(int i=0; i< m; i++) {
        for(int j=0; j <n; j++) {
            count = 0;
            if(grid[i][j] == 'W') {
                if(i > 0 && grid[i-1][j] == 'P') count++;
                if(j > 0 && grid[i][j-1] == 'P') count++;
                if(i < m-1 && grid[i+1][j] == 'P') count++;
                if(j < n-1 && grid[i][j+1] == 'P') count++;
                wolves[count].push_back({i, j});
            }
        }
    }

    int sheeps=0, r, c;
    for(int i=1; i < 5; i++) {
        for(int j=0; j < wolves[i].size(); j++) {
            r = wolves[i][j].first;
            c = wolves[i][j].second;
            if(r > 0 && grid[r-1][c] == 'P') {grid[r-1][c] = 'E'; sheeps++;}
            else if(c > 0 && grid[r][c-1] == 'P') {grid[r][c-1] = 'E'; sheeps++;}
            else if(r < m-1 && grid[r+1][c] == 'P') {grid[r+1][c] = 'E'; sheeps++;}
            else if(c < n-1 && grid[r][c+1] == 'P') {grid[r][c+1] = 'E'; sheeps++;}            
        }
    }
    cout << sheeps << endl;
    return 0;
}