#include <iostream>
#define ll long long

using namespace std;

int main() {
    ll n, b;
    cin >> n >>  b;
    ll k = n;
    ll rem, p = 1, req = 0, trail = 0;
    while(n >= 10) {
        rem = n%10;
        if(rem != 9) {
            req = 10+rem-9;
            if(req*p <= b) {b-=req*p; trail++;}
            else break;
        }else{trail++;}
        if(rem != 9) n=n/10-1;
        else n/=10;
        p*=10;
    } 
    while(trail--) {
        n=n*10+9;
    }
    cout << n << endl;
    return 0;
}