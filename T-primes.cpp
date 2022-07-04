#include <iostream>
#include <cmath>
#include <vector>
#include <set>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<bool> isPrime(1000001, true);
    ll i=2;
    while(i*i <= 1000001) {
        for(ll j=i*i; j <= 1000001; j+=i) {
            isPrime[j] = false;
        }
        i++;
        while(i*i <= 1000001 && isPrime[i] == false) i++;
    }

    set<ll> prime;
    for(ll i=2; i <= 1000001; i++) if(isPrime[i]) prime.insert(i);
    int n;
    cin >> n;
    ll num;
    while(n--) {
        cin >> num;
        if(num == 1) {cout << "NO" << endl; continue;}
        ll k = sqrt(num);
        if(k*k == num && prime.find(k) != prime.end()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}