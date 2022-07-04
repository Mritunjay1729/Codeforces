#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<bool> isPrime(51, true);
    int i = 2;
    while(i*i <= 50) {
        for(int j=i*i; j <= 50; j+=i) isPrime[j] = false;
        i++;
        while(i*i <= 50 && isPrime[i] == false) i++;
    }
    vector<int> prime;
    for(int i=2; i <= 50; i++) if(isPrime[i]) prime.push_back(i);
    int count = 0, p; 
    string ans;
    for(int i=0; i < prime.size(); i++) {
        cout << prime[i] << endl;
        cin >> ans;
        if(ans == "yes") {count++; p = i;}
        if(count >= 2) break;
    }
    if(count >= 2) cout << "composite" << endl;
    else if(count == 0) cout << "prime" << endl;
    else if(count == 1) {
        if(prime[p] < 10) {
            cout << prime[p]*prime[p] << endl;
            cin >> ans;
            if(ans == "yes") cout << "composite" << endl;
            else cout << "prime" << endl;
        }else{
            cout << "prime" << endl;
        }
    }
    fflush(stdout);
    return 0; 
}