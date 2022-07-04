#include <iostream>
#include <cmath>
#define ll long long int

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    //Case of no edges - all isolated
    if(m == 0) {cout << n << " " << n << endl; exit(0);}

    ll mnisolated , mxisolated;
    if(m*2 >= n) mnisolated = 0;
    else mnisolated = n-m*2;
    ll x = sqrt(2*m)+1;
    mxisolated = n-x;
    if((x*(x-1))/2 < m) mxisolated--;
    cout << mnisolated << " " << mxisolated << endl;
    return 0;
}