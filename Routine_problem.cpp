#include <iostream>
#define ll long long int

using namespace std;

ll hcf(ll a, ll b) {
    if(a == 0) return b;
    if(b == 0) return a;
    if(a > b) return hcf(a%b, b);
    else if(a < b) return hcf(b%a, a);
    else return a;
}

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll lcm1 = (a*c)/hcf(a, c);
    ll lcm2 = (b*d)/hcf(b, d);
    if(lcm1 > lcm2) {
        int x = lcm1/a;
        a*=x;
        b*=x;
        int y = lcm1/c;
        c*=y;
        d*=y;
    }else{
        int x = lcm2/b;
        a*=x;
        b*=x;
        int y = lcm2/d;
        c*=y;
        d*=y;
    }

    ll h = hcf(a*b, c*d);
    if(a*b>=c*d) cout << (a*b-c*d)/h  << "/" << (a*b)/h << endl;
    else cout << (c*d-a*b)/h << "/" << (c*d)/h << endl; 
    return 0;
}