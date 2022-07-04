#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll a, b, n;
    cin >> a >> b >> n;
    ll ans = 0;
    if(n%3 == 1) ans = a;
    else if(n%3 == 2) ans = b;
    else if(n%3 == 0) ans = b-a;
    if((n%6==0)?6:n%6 > 3) ans*=-1;
    if(ans >= 0) cout << ans%(ll)(10E8+7) << endl;
    else cout << ((ll)(10E8+7)+ans%(ll)(10E8+7))%(ll)(10E8+7) << endl;
    return 0;
}