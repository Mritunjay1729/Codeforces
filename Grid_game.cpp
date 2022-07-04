#include <iostream>
#include <vector>

using namespace std;

int main() {
    string blocks;
    cin >> blocks;
    vector<vector<int>> grid(5, vector<int>(5, -1));
    vector<int> row(5, 0), col(5, 0);
    int current=0;
    int i, j;
    for(int k=0; k < blocks.size(); k++) {
        if(blocks[k] == '0') {
            for(j=1; j<=4; j++) if(col[j] == 2) break;
            if(j != 5) {
                for(i = 1; i < 4; i++) if(grid[i][j] == -1) break;
                grid[i][j] = 1;
                grid[i+1][j] = 1;
                row[i]++, row[i+1]++;
                col[j]+=2;  
                cout << i << " " << j << endl;
            }else{
                for(j=1; j <= 4; j++) if(col[j] == 0) break;
                for(i=1; i < 4; i+=2) if(row[i] == 0) break;
                grid[i][j] = 1;
                grid[i+1][j] = 1;
                row[i]++, row[i+1]++;
                col[j]+=2;
                cout << i << " " << j << endl;
            }
        }else{
            for(i=1; i <= 4; i++) if(row[i] == 2) break;
            if(i != 5) {
                for(j=1; j<4; j++) if(grid[i][j] == -1) break;
                grid[i][j] = 1;
                grid[i][j+1] = 1;
                row[i]+=2;
                col[j]++, col[j+1]++;
                cout << i << " " << j << endl;
            }else{
                for(i=1; i <= 4; i++) if(row[i] == 0) break;
                for(j=1; j<4; j+=2) if(col[j] == 0) break;
                grid[i][j] = 1;
                grid[i][j+1] = 1;
                row[i]+=2;
                col[j]++, col[j+1]++;
                cout << i << " " << j << endl;
            }
        }

        for(i=1; i <= 4; i++) if(row[i] == 4) {
            for(j=1; j <= 4; j++) {grid[i][j] = -1; col[j]--;}
            row[i] = 0;
        }
        for(j=1; j <= 4; j++) if(col[j] == 4) {
            for(i=1; i<=4; i++) {grid[i][j] = -1; row[i]--;}
            col[j] = 0;
        }
        // for(i=1; i < 5; i++) {for(j =1; j < 5; j++) {cout << grid[i][j] << " ";} cout << endl;}
        // cout << endl;
    }
    return 0;
}