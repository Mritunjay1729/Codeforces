#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<vector<char>> grid(8, vector<char>(8));
    int x1, x2, y1, y2, flag ;
    while(t--) {
        flag = 0;
        for(int i=0; i < 8; i++) {
            for(int j=0; j < 8; j++) {
                cin >> grid[i][j];
                if(grid[i][j] == 'K') {
                    if(flag == 0) {
                        x1 = i, y1 = j;
                        flag = 1;
                    }else{
                        x2 = i, y2 = j;
                    }
                }
            }
        }

        if((x2-x1)%4 == 0 && (y2-y1)%4 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}