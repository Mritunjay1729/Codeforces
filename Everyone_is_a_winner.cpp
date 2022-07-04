#include <iostream>
#define ll long long int
#include <set>
#include <algorithm>


using namespace std;

int main() {
    int t;
    cin >> t;
    ll n;
    set<ll> result;
    while(t--) {
        cin >> n;
        result.clear();
        result.insert(0);
        for(int i=1; i*i <= n; i++) {
            result.insert(i);
            result.insert(n/i);
        }
        cout << result.size() << endl;
        for(auto val : result) cout << val << " ";
        cout << endl;
    }
    return 0;
}