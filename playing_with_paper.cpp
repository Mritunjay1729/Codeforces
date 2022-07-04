#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;
    ll count = 0;
    while(a != b && a != 0 && b != 0) {
        if(a == 1) {count+=b; break;}
        if(b == 1) {count+=a; break;}
        if(a > b) {count+=a/b; a%=b;}
        else if(b > a) {count+=b/a; b%=a;}
    }
    if(count == 0) cout << 1 << endl;
    else cout << count << endl;
    return 0;
}