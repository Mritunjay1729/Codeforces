#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    set<pair<int, int>> lava;
    vector<vector<int>> maze(2, vector<int>(n, 1));
    int flag = 0, x, y;
    while(q--) {
        cin >> x >> y;
        if(maze[x-1][y-1] == 1) {
            maze[x-1][y-1] = 0;
            lava.insert({x, y});
            if(x == 1) {
                if(lava.find({x+1, y}) != lava.end()) flag += 1;
                if(y > 0 && lava.find({x+1, y-1}) != lava.end()) flag +=1;
                if(y < n && lava.find({x+1, y+1}) != lava.end()) flag+=1;
            }else{
                if(lava.find({x-1, y}) != lava.end()) flag += 1;
                if(y > 0 && lava.find({x-1, y-1}) != lava.end()) flag +=1;
                if(y < n && lava.find({x-1, y+1}) != lava.end()) flag+=1;
            }
        }else{
            maze[x-1][y-1] = 1;
            lava.erase({x, y});
            if(x == 1) {
                if(lava.find({x+1, y}) != lava.end()) flag -= 1;
                if(y > 0 && lava.find({x+1, y-1}) != lava.end()) flag -=1;
                if(y < n && lava.find({x+1, y+1}) != lava.end()) flag-=1;
            }else{
                if(lava.find({x-1, y}) != lava.end()) flag -= 1;
                if(y > 0 && lava.find({x-1, y-1}) != lava.end()) flag -=1;
                if(y < n && lava.find({x-1, y+1}) != lava.end()) flag-=1;
            }      
        }
        if(flag == 0) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    // for(int i=0; i < 2; i++) {
    //     for(int j=0; j < 10; j++) {
    //         cout << maze[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}