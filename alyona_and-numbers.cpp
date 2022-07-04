#include <iostream>
#define ll long long int
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll m, n;
    cin >> m >> n;
    ll count = m*(n/5);
    for(ll i=1; i <= m; ++i) {
        if(i%5+n%5>=5) count++;
    }
    cout << count << endl;
    return 0;
}