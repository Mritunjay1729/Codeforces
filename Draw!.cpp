#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int mx = 0, count = 0;
    int x, y;
    while(n--) {
        cin >> x >> y;
        int k = min(x, y);
        if(k >= mx) {count+=k-mx+1;}
        mx = max(x, y);
        if(x == y) mx+=1;
    }
    cout << min(mx+1, count) << endl;
    return 0;
}