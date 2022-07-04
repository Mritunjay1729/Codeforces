#include <iostream>
#include <vector>

using namespace std;

vector<bool> isPrime(150000, true);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //Sieve of Eratosthenes
    int i=2;
    while(i*i < 150000) {
        int j = i*i;
        while(j < 150000) {
            if(j < 150000) isPrime[j] = false;
            j+=i;
        }
        i++;
        while(i < 150000 && isPrime[i] != true) i++;
    }
    vector<int> primes;
    for(int i=2; i < 150000; i++) if(isPrime[i] == true) primes.push_back(i);
    
    int n, m, num;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            cin >> num;
            int l=0, r=primes.size()-1, mid;
            while(l < r) {
                mid = (l+r)/2;
                if(primes[mid] == num) break;
                else if(primes[mid] < num) l = mid+1;
                else r = mid; 
            } 
            if(primes[mid] < num) mid+=1;
            matrix[i][j] = primes[mid]-num;
        }
    }

    // for(int i=0; i < n; i++) {
    //     for(int j=0; j < m; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int sum = 0, min_sum = INT32_MAX;
    for(int i=0; i<n; i++) {
        sum= 0;
        for(int j=0; j<m; j++) sum+=matrix[i][j];
        min_sum = min(sum, min_sum);
    }

    for(int j=0; j < m; j++) {
        sum = 0;
        for(int i=0; i < n; i++) sum+=matrix[i][j];
        min_sum=min(sum, min_sum);
    }
    cout << min_sum << endl;
    return 0;
}