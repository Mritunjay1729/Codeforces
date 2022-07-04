#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    ll s, a, b, c, chocolates = 0;
    while(t--) {
        cin >> s >> a >> b >> c;
        chocolates = 0;
        if(a*c <= s) {chocolates+= (a+b)*(s/(a*c)); s%=(a*c);}
        chocolates += (s/c);
        cout << chocolates << endl;
    }
    return 0;
}