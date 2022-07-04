#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<char>> board(n, vector<char>(n));
    for(int i=0; i <n; i++) {
        for(int j=0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    int count = 0;
    for(int i=0; i < n; i++) {
        count = 0;
        for(int j=0; j < n; j++) {
            if(i > 0 && board[i-1][j] == 'o') count++;
            if(j > 0 && board[i][j-1] == 'o') count++;
            if(i < n-1 && board[i+1][j] == 'o') count++;
            if(j < n-1 && board[i][j+1] == 'o') count++;
            if(count%2) {printf("NO\n"); exit(0);} 
        }
    }
    printf("YES\n");
    return 0;
}