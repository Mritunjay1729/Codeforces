#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    ll n, z, mx, num;
    while(t--) {
        mx = 0;
        cin >> n >> z;
        for(int i=0; i < n; i++) {
            cin >> num;
            num|=z;
            mx = max(mx, num);
        }
        cout << mx << endl;
    }
}