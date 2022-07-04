#include <iostream>
#define ll long long int
#include <cmath>

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    ll p = 1;
    while(k--) p*=10;
    ll removed = 0, alpha=1, count = 0;
    while(n > 0) {
        // cout << alpha*n << " " << n << endl;
        if((alpha*n)%p == 0) {
            cout << removed << endl;
            exit(0);
        }
        if(n%10 == 0) {alpha*=10; count++;}
        else removed++;
        n/=10;
    }
    ll ans  = removed+count-1;
    cout << ((ans>0)?ans:0) << endl;
    return 0;
}