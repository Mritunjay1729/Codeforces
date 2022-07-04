#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    ll start = 1, temp = n;
    while(n > 1) {
        // cout << start << endl;
        start = (start<<1)+1;
        n/=2;
    } 
    if(k == 1) start = min(temp, start);
    cout << start << endl;
}