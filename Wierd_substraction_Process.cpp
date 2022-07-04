#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;
    while(1) {
        if(a == 0 || b == 0) break;
        else if(a >= 2*b) { a%=2*b; continue;}
        else if(b >= 2*a) {b%=2*a; continue;}
        else break;
    }
    cout << a << " " << b << endl;
    return 0;
}