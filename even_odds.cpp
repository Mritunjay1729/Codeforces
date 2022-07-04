#include <iostream>
#define ll long long int 

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    if(k <= (n+1)/2) cout << 2*k-1 << endl;
    else cout << 2*(k-(n+1)/2) << endl;
    return 0;
}