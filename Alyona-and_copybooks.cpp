#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll money = 0;
    if(n%4 == 0) cout << money << endl;
    else {
        n= 4-n%4;
        if(n == 1) cout << min(min(a, b+c), 3*c) << endl;
        else if(n == 2) cout << min(min(2*a, b), 2*c) << endl;
        else cout << min(min(3*a, b+a), c) << endl;
    }
    return 0;
}