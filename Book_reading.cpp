#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;
    ll m, n;
    ll x, sum1, sum;
    while(q--) {
        cin >> n >> m;
        sum1 = sum = 0;
        x = n/m;
        for(int i=1; i <= 10; i++) sum1+=(m*i)%10;
        sum+=(x/10)*sum1;
        x%=10;
        for(int i=1; i <= x; i++) sum+=(m*i)%10;
        cout << sum << endl;
    } 
    return 0;
}