#include <iostream>

using namespace std;

int main() {
    int r, g, b;
    cin >> r >> g >> b;
    int count = 0, res = 0;
    while(r > 0 || g > 0 || b > 0) {
        count%=3;
        if(count == 0) {r-=2; res++;}
        else if(count == 1) {g-=2; res++;}
        else {b-=2; res++;}
        count++;
    }
    cout << 29 + res << endl;
    return 0;
}