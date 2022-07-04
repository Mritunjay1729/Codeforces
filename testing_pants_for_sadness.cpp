#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, r;
    cin >> n;
    ll x = 1, count = 0;
    for(ll i=0; i<n; i++) {
        cin >> r;
        count += x*(r-1);
        x++;
    }
    count += n;
    cout << count << endl;
    return 0;
}