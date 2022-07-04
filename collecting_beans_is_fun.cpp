#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; //number of keys that he can press with one hand in 1 sec
    char check;
    cin >> n;
    vector<int> pressed(9, 0);
    for(int i=0; i < 4; i++) {
        for(int j=0; j<4; j++) {
            cin >> check;
            if(check == '.') continue;
            else pressed[check-'0'-1]++;
        }
    }

    // for(int i=0; i <9; i++) cout << pressed[i] << " ";
    // cout << endl;
    for(int i=0; i<9; i++) {
        if(pressed[i] > 2*n) {printf("NO\n"); exit(0);}
    }
    printf("YES\n");
    return 0;
}