#include <iostream>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int t, x, y;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        if(x-y+d >= 0 && x-y-d <=0 && -y-x+d <= 0 && -y-x+2*n-d >= 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}