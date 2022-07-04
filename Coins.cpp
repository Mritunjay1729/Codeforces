#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;
    cin >> n;
    t = n;
    vector<int> res;
    res.push_back(1);

    vector<int> prime;
    vector<bool> isPrime(n+1, true);
    int i=2;
    while(i*i <= n){
        for(int j = i*i; j <= n; j+=i){
            isPrime[j] = false;
        }
        i++;
        if(i*i <= n && isPrime[i] ==false) i++;
    }
    for(int i=2; i*i <= n; i++) if(isPrime[i]) prime.push_back(i);
    int count = 1;
    for(int i=0; i < prime.size(); i++) {
        while(n%prime[i] == 0) {
            count*=prime[i];
            res.push_back(count);
            n/=prime[i];
        }
    }
    if(res[res.size()-1] != t) res.push_back(t);

    for(int i=res.size()-1; i >= 0; i--) cout << res[i] << " ";
    return 0;
}