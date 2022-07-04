#include <iostream>
#define ll long long int

using namespace std;

ll HCF(ll a, ll b) {
    if(a % b == 0) return b;
    else if(b % a == 0) return a;
    else if(a > b) return HCF(a%b, b);
    else return HCF(b%a, a);
}

int main() {
    ll l, r;
    cin >> l >> r;
    ll a, b, c;
    a = l;
    b = -1;
    c = r;
    if(HCF(a, c) == 1) {
        if(a%2 == 1 & a+1 < c) a++;
        if(c%2 == 1 && c-1 > a) c--;
    }

    for(ll i=a; i <c; i++) {
        if(HCF(a, i) == 1 && HCF(i, c) == 1) {b = i; break;}
    }
    if(b == -1) {printf("%d\n", -1); exit(0);}
    cout << a << " " <<  b << " " << c << endl;
    return 0;
}