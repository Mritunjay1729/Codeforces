#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    ll p = 2, num = 1;
    while(k%p != p/2) {p*=2; num++;}
    cout << num << endl;
    return 0;
}