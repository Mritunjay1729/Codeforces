#include <iostream>
#include <vector>

using namespace std;

vector <bool> isPrime(10000001, true);
vector<int> prime;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    if(n == 1 && k !=0 ) {cout << -1 << endl; exit(0);}
    if(n/2 > k) {cout << -1 << endl; exit(0);}

    int i=2;
    while(i*i <= isPrime.size()) {
        for(int j = i*i; j <= isPrime.size()-1; j+=i) {
            isPrime[j] = false;
        }
        i++;
        while(i*i <= isPrime.size()-1 && isPrime[i] == false) i++;
    }

    for(int i=2; i < isPrime.size(); i++) {
        if(prime.size() == n+1)  break;
        if(isPrime[i]) prime.push_back(i);
    }
    int first = k-n/2+1;
    if(first == 1)  {
        for(int i=0; i < n; i++) cout << prime[i] << " ";
    }else{
        cout << first << " " << 2* first << " ";
        int flag = 0, i;
        for(i=0; i < n-2; i++) {
            if(prime[i] == first) {flag = 1; continue;}
            cout << prime[i] << " ";
        }
        if(flag == 1) cout << prime[i] << endl;
        else cout << endl;
    }
    return 0;
}