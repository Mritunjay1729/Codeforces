#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    ll n, k;
    while(t--){
        cin >> n >> k;
        if(n%2 != k%2) printf("NO\n");
        else {
            if(n >= k*k) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}