#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    ll x, y;
    while(t--) {
        cin >> x >> y;
        if(x-y >= 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}