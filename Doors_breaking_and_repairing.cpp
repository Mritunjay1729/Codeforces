#include <iostream>

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    int door, weak= 0;
    for(int i=0; i < n; i++) {
        cin >> door;
        if(door <= x) weak++;
    }
    if(x > y) cout << n << endl;
    else cout << (weak+1)/2 << endl;
    return 0;  
}