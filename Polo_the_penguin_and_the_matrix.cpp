#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> arr(n*m);
    for(int i=0; i < n*m; i++) cin >> arr[i];
    n = n*m;
    if(n == 1) {cout << 0 << endl; exit(0);}
    int l = 0, r= 0;
    sort(arr.begin(), arr.end());
    for(int i=1; i < n; i++) {
        if((arr[i]-arr[0])%d != 0) {cout << -1 << endl; exit(0);}
        r+=arr[i]-arr[0];
    }

    int mn = l+r;
    for(int i=1; i < n; i++) {
        r-=(n-i)*(arr[i]-arr[i-1]);
        l+=i*(arr[i]-arr[i-1]);
        mn = min(mn, l+r);
    }
    cout << mn/d << endl;
    return 0;
}