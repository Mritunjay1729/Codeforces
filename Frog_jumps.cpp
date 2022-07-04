#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    string str;
    int n, max_move;
    while(t--) {
        cin >> str;
        max_move = 0;
        n = str.length();
        int i=0, prev = -1;
        while(i < n) {
            if(str[i] == 'R') {
                max_move = max(max_move, i-prev);
                prev = i;
            }
            i++;
        }
        max_move = max(i-prev, max_move);
        cout << max_move << endl;
    }
    return 0;
}