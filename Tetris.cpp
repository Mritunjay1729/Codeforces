#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, sq, col;
    cin >> n >> sq;
    vector<int> tetris(n);
    for(int i=0; i < sq; i++) {
        cin >> col;
        tetris[col-1]++;
    }
    // for(int i=0; i < tetris.size(); i++) cout << tetris[i] << " ";
    cout << endl;
    int win = INT32_MAX;
    for(int i=0; i < n; i++) win = min(win, tetris[i]);
    printf("%d\n", win); 
    return 0;
}