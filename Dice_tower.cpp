#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll k;
    while(n--) {
        cin >> k;
        if(k/14 != 0 && k%14 > 0 && k%14 < 7) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}