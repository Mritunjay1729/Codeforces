#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    int mn=x, mx=y, index = 1;
    for(int i=1; i < n; i++) {
        cin >> x>> y;
        if(x <= mn && y >= mx) {mn = x; mx = y; index = i+1;}
        else if(x > mn && y < mx) continue;
        else if(x < mn) {mn = x; index = -1;}
        else if(y > mx) {mx = y; index = -1;}
    }
    cout << index << endl;
    return 0;
}