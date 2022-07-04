#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> board(n+1, vector<int>(m+1, 0));
    int x, y;
    for(int i=1; i <= k; i++) {
        cin >> x >> y;
        if(board[x][y] == 0) board[x][y] = i;
    }
    

    int count, index, min_index=k+1;
    for(int i=1; i <= n-1; i++) {
        for(int j=1; j <= m-1; j++) {
            count = 0, index = 0;
            for(int is=0; is < 2; is++) {
                for(int js=0; js <2; js++) {
                    count+=(board[i+is][j+js] > 0);
                    index = max(index, board[i+is][j+js]);
                }
            }
            if(count == 4) min_index = min(index, min_index);
        }
    }
    cout << (min_index==k+1?0:min_index) << endl;
    return 0;
}