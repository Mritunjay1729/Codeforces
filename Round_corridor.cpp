#include <iostream>
#define ll long long int

using namespace std;

ll HCF(ll a, ll b) {
    if(a == 0) return b;
    if(b == 0) return a;
    if(a > b) return HCF(a%b, b);
    else if(a < b) return HCF(b%a, a);
    else return a;
}

int main() {
    ll m, n, q;
    cin >> m >> n >> q;
    ll sector = HCF(m, n);
    ll xm = m/sector, xn = n/sector;
    // cout << xm << " " << xn << endl;
    ll as, a, bs, b;
    while(q--) {
        cin >> as >> a >> bs >> b;
        if(as == bs) {
            if(as == 1) {
                if((a-1)/xm != (b-1)/xm) cout << "NO" << endl;
                else cout << "YES" << endl;
            }else{
                if((a-1)/xn != (b-1)/xn) cout << "NO" << endl;
                else cout <<  "YES" << endl;
            }
        }else{
            if(as == 1 && bs == 2) {
                if((a-1)/xm != (b-1)/xn) cout << "NO" << endl;
                else cout << "YES" << endl;
            }else{
                if((a-1)/xn != (b-1)/xm) cout << "NO" << endl;
                else cout << "YES" << endl;
            }
        }
    }
    return 0;
}