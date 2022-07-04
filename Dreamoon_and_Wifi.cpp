#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int fact(int n) {
    if(n == 0 || n == 1) return 1;
    else return n*fact(n-1);
}

long double combination(int n, int m) {
    return (long double)fact(n)/(fact(m)*fact(n-m));
}

int main() {
    string original, perceived;
    cin >> original >> perceived;
    int opos, oneg, ppos, pneg;
    opos = oneg = ppos = pneg = 0;
    for(auto ch : original) {
        if(ch == '+') opos++;
        else oneg++;
    }

    for(auto ch : perceived) {
        if(ch == '+') ppos++;
        else if(ch == '-') pneg++;
    }

    long double ans;
    // cout << opos << " " << oneg << " " << ppos << " " << pneg << endl;
    if(opos+oneg == ppos+pneg) {
        if(opos == ppos && oneg == pneg) ans = 1.0;
        else ans = 0.0;
    }else if(ppos > opos || pneg > oneg){
            ans = 0.0;      
    }else{
        ppos = abs(opos-ppos);
        pneg = abs(oneg-pneg);
        long double dem = pow(2, ppos+pneg);
        // cout << ppos << " " << pneg << endl;
        // cout << dem << " " << combination(ppos+pneg, ppos) << endl;
        ans = combination(ppos+pneg, ppos)/dem;
    }
    cout << fixed << setprecision(12) << ans;
    return 0;
}