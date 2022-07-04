#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll m, n;
    cin >> m >> n;
    if(n-1 > m-n) cout << n-1;
    else if(n-1 < m-n) cout << n+1;
    else {
        if(m == 1) cout << n;
        else if(m == 2) {
            if(n == 1) cout << 2;
            else cout << 1;
        } else {
            cout << n-1;
        } 
    }
    cout << endl;
    return 0;
}