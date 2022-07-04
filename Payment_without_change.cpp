#include <iostream>
#include <vector>
#define ll long long int
#define fl(n) for(int i=0; i < n; i++)
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
    int t;
    cin >> t;
    int a, b, n, s;
    while(t--) {
        cin >> a >> b >> n >> s;
        s-=min(a, s/n)*n;
        if(b >= s) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}