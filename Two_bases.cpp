#include <iostream>
#define ll long long

using namespace std;

int main() {
    ll n, base;
    cin >> n >> base;
    int val;
    ll a = 0;
    while(n--) {
        cin >> val;
        a=a*base+val;
    }
    ll b = 0;
    cin >> n >> base;
    while(n--) {
        cin >> val;
        b=b*base+val;
    }
    if(a == b) cout << "=" << endl;
    else if(a < b) cout << "<" << endl;
    else cout << ">" << endl;
    return 0;
}