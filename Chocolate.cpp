#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ll n, hasNut;
    cin >> n;
    vector<bool> isNut(n);
    for(ll i=0; i < n; i++) {cin >> hasNut; isNut[i]=(hasNut==1);}
    ll i=0;
    ll max_patterns = 1;
    while(i < n && isNut[i] == false) i++;
    if(i == n) {cout << "0" << endl; exit(0);}
    ll start = i;
    i++;
    while(i < n) {
        if(isNut[i] == true) {
            max_patterns*=(i-start);
            start = i;
        }
        i++;
    }
    if(isNut[n-1]) max_patterns*=(i-start);
    cout << max_patterns << endl;
    return 0;
}