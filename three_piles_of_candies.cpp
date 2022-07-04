#include <iostream>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    ll a, b, c;
    while(t--) {
        cin >> a >> b >> c;
        if(a > c) swap(a, c);
        if(b > c) swap(b, c);
        if(a > b) swap(a, b);
        if(a+b == c) cout << c << endl;
        else cout << (a+b+c)/2 << endl;
    }
    return 0;
}