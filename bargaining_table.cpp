#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> n >> m;
    vector<string> grid(n);
    for(int i=0; i < n; i++) {
        cin >> grid[i];
    }

    vector<vector<int>> arr(n, vector<int>(m, 0));
    for(int j=0; j < m; j++) if(grid[0][j] == '0') arr[0][j] = 1;
    for(int j=0; j < m; j++) {
        for(int i=1; i < n; i++) {
            if(grid[i][j] == '0') {
                arr[i][j] = arr[i-1][j]+1;
            }
        }
    }

    int max_perim = 0;
    int count = 0;
    for(int i=0; i < n; i++) {
        if(arr[i][0] > 0) count = 1;
        for(int j=1; j < m; j++) {
            if(arr[i][j] == 0) {max_perim = max(max_perim, 2*(count+arr[i][j-1])); count = 1;}
            else if(arr[i][j] != arr[i][j-1]) {max_perim=max(max_perim, 2*(count+arr[i][j-1])); count = 1;}
            else count++;
        }
        if(arr[i][m-1]) max_perim = max(max_perim, 2*(count+arr[i][m-1]));
    }

    for(int i=0; i < n; i++) for(int j=0; j < m; j++) arr[i][j] = 0;
    for(int i=0; i < n; i++) if(grid[i][0] == '0') arr[i][0] = 1;

    for(int j=1; j < m; j++) {
        for(int i=0; i < n; i++) {
            if(grid[i][j] == '0') {
                arr[i][j] = arr[i][j-1]+1;
            }
        }
    }


    count = 0;
    for(int j=0; j < m; j++) {
        if(arr[0][j] > 0) count = 1;
        for(int i=1; i < n; i++) {
            if(arr[i][j] == 0) {max_perim = max(max_perim, 2*(count+arr[i-1][j])); count = 1;}
            else if(arr[i][j] != arr[i-1][j]) {max_perim = max(max_perim, 2*(count+arr[i-1][j])); count = 1;}
            else count++;
        }
        if(arr[n-1][j]) max_perim = max(max_perim, 2*(count+arr[n-1][j]));
    }
    cout << max_perim << endl;
    return 0;
}