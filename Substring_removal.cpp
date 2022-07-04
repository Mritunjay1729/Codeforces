#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll n, result;
    cin >> n;
    string str;
    cin >> str; 
    result = 0;
    ll i, j;
    for(i=1; i < str.length(); i++) {
        if(str[i] != str[i-1]) break;
    }
    if(i == n) {cout << n+1 << endl; exit(0);}
    for(j=n-2; j >= i; j--) {
        if(str[j] != str[j+1]) break;
    }
    // cout << i << " " << j << endl;
    j=(n-j-1);
    result += (i+1) + (j+1) - 1;
    result%=998244353;
    if(n!=1 && str[0] == str[n-1])  result+=(i*j)%998244353;
    cout << result%998244353 << endl;
    return 0;
}