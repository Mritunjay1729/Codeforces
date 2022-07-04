#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> grid(3, vector<int>(3));
    int sum = 0, max_sum = 0;
    for(int i=0; i < 3; i++) {
        sum = 0;
        for(int j=0; j < 3; j++) {
            cin >> grid[i][j];
            sum+=grid[i][j];
        }
        max_sum = max(max_sum, sum);
    }

    for(int j=0; j < 3; j++){
        sum = 0;
        for(int i=0; i < 3; i++) {
            sum+=grid[i][j];
        }
        max_sum = max(max_sum, sum);
    }

    sum = 0;
    for(int i=0; i < 3; i++) {sum+=grid[i][i];}
    max_sum = max(sum, max_sum);
    sum = 0;
    for(int i=0; i < 3; i++) {sum+=grid[i][2-i];}
    max_sum = max(sum, max_sum);

    max_sum+=1;
    grid[0][0] = max_sum-grid[0][1]-grid[0][2];
    grid[1][1] = max_sum-grid[1][0]-grid[1][2];
    grid[2][2] = max_sum-grid[2][0]-grid[2][1];
    while(grid[0][0]+grid[1][1]+grid[2][2] != grid[0][0]+grid[0][1]+grid[0][2]) {
        grid[0][0]++;
        grid[1][1]++;
        grid[2][2]++;
    }

    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}