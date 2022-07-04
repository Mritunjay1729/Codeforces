#include <iostream>
#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    int h, w, k;
    cin >> h >> w;
    vector<vector<int>> box(h+1, vector<int>(w+1, -1));
    for(int i=1; i <= h; i++) {
        cin >> k;
        if(k != w) box[i][k+1] = 0;
        for(int j=1; j <= min(w, k); j++) box[i][j] = 1;
    }

    for(int j=1; j <= w; j++) {
        cin >> k;
        if(k != h) {
            if(box[k+1][j] == 1) {
                cout << 0 << endl;
                exit(0);
            }else  box[k+1][j] = 0;
        }
        for(int i=1; i <= min(h, k); i++) {
            if(box[i][j] == 0) {
                cout << 0 << endl;
                exit(0);
            }else box[i][j] = 1;
        }
    }
    int box_count = 0;
    for(int i=1; i <= h; i++) {
        for(int j=1; j <= w; j++) {
            box_count+=(box[i][j] == -1);
        }
    }
    int boxes = box_count;
    ll res = 1;
    while(boxes > 0) {
        res=(res*2)%(ll)(10E8+7);
        boxes--;
    }
    cout << res << endl;
    return 0;
}