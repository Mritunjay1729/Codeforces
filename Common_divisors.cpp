#include <iostream>
#include <vector>
#define ll long long int
#include <cmath>
using namespace std;

ll HCF(ll a, ll b) {
    while(a != b) {
        if(a == 0) return b;
        if(b == 0) return a;
        if(a > b) a%=b;
        else b%=a;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    ll num, hcf;
    cin >> hcf;
    for(int i=1; i < n; i++) {
        cin >> num;
        if(num%hcf != 0) hcf = HCF(num, hcf);
    }

    if(hcf == 1) cout << 1 << endl;
    else {
        vector<ll> prime(sqrt(hcf)+10, -1);
        ll i = 2;
        vector<ll> factors;
        while(i*i < prime.size()) {
            for(ll j = i*i; j < prime.size(); j+=i) {
                prime[j] = 1;
            } 
            i++;
            while(i*i < prime.size() && prime[i] != -1) i++;
        }
        for(ll i=2; i < prime.size(); i++) if(prime[i] == -1) factors.push_back(i);
        ll result = 1;
        for(ll i=0; i < factors.size(); i++) {
            ll count = 0;
            if(hcf%factors[i] == 0) {
                while(hcf%factors[i] == 0) {
                    hcf/=factors[i];
                    count++;
                }
                result*=(count+1);
            }
        } 
        if(hcf != 1) result*=2;
        cout << result << endl;
    }
    return 0;
}