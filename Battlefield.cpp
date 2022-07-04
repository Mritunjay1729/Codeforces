#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int xinit, yinit, xfin, yfin;
    cin >> xinit >> yinit >> xfin >> yfin;
    int q;
    cin >> q;
    int x, y;
    vector<vector<int>> trenches(q, vector<int>(4));
    for(int i=0; i < q; i++) {
        for(int j=0; j < 4; j++) {
            cin >> trenches[i][j];
        }
    }

    
    return 0;
}