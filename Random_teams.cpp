#include <iostream>
#define ll long long

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    ll k = n/m;
    ll mn = m*(k*(k-1))/2+(n-k*m)*k;
    n-=(m-1);
    ll mx = (n*(n-1))/2;
    cout << mn << " " << mx << endl;
    return 0;
}