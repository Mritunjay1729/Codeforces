#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll k, two, sum=0;
    while(n--) {
        two = 1;
        sum = 0;
        cin >> k;
        while(two <= k) {
            sum+=two;
            two*=2;
        }
        sum = (k*(k+1))/2 - 2*sum;
        cout << sum << endl;
    }  
}