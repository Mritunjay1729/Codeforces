#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll k = 9, temp = n, count = 1, extra = 9;
    ll digits = 0;
    while(extra < n) {
        digits+=count*k;
        k*=10;
        extra+=k;
        count++;
    }
    if(n > k/10) digits+=(n-extra/10)*count;
    cout << digits << endl;
    return 0;
}