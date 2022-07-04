#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int t = a, base =0;
    while(t > 0) {base = max(base, t%10); t/=10;}
    t = b;
    while(t > 0) {base = max(base, t%10); t/=10;}
    base++;

    string res; char dig;
    int carry = 0, d;
    while(a > 0 && b > 0) {
        d =  a%10+b%10+carry;
        carry = d/base;
        d = d%base;
        dig = '0'+d;
        res = dig+res;
        a/=10; b/=10;
    }

    while(a > 0) {
        d = a%10+carry;
        carry = d/base;
        d = d%base;
        dig = '0'+d;
        res = dig+res;
        a/=10;
    }

    while(b > 0) {
        d = b%10+carry;
        carry = d/base;
        d = d%base;
        dig = '0'+d;
        res = dig+res;
        b/=10;
    }

    while(carry > 0) {
        dig = '0'+carry%10;
        res = dig+res;
        carry/=10;
    }
    cout << res.length() << endl;
    return 0;
}