#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll k = 1, count = 0, m=0;
    while(m+k <= n) {
        count++;
        m+=k;
        k*=2;
    }
    // cout << m << " " << n << endl;
    cout << count + (m<n) << endl;
    return 0;
}