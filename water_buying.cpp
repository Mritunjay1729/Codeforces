#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    ll n, a, b;
    while(t--) {
        cin >> n >> a >> b;
        if(2*a < b) {cout <<  n*a << endl;}
        else {cout << (n/2)*b+(n%2)*a << endl;}
    }
    return 0;
}