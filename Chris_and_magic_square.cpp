#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<vector<ll>> arr(n, vector<ll>(n, 0));
    ll sum = 0, max_sum=0;
    pair<ll, ll> target = {-1, -1};
    for(ll i=0; i < n; i++) {
        sum = 0;
        for(ll j=0; j < n; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 0) {target = {i, j}; continue;}
            sum+=arr[i][j];
        }
        max_sum = max(sum, max_sum);
    }

    ll a, b, c, d, k = 0;
    for(ll i=0; i < n; i++) k+=arr[i][target.second];
    a =  k, k= 0;
    for(ll j=0; j < n; j++) k += arr[target.first][j];
    b = k, k = 0;
    if(a != b) {cout << -1 << endl; exit(0);}
    if(target.first == target.second) {
        for(ll i=0; i < n; i++) k+=arr[i][i];
        c = k;
        if(c != a) {cout << -1 << endl; exit(0);}
    }
    k=0;
    if(target.first == n-target.second-1) {
        for(ll i=0; i < n; i++) k+=arr[i][n-i-1];
        d = k;
        if(d != a) {cout << -1 << endl; exit(0);}
    }
    if(max_sum-a > 0) {
        arr[target.first][target.second] = max_sum-a;
        vector<ll> rows(n), cols(n);
        sum  =0;
        for(int i=0; i < n; i++) {sum = 0; for(int j=0; j < n; j++) {sum+=arr[i][j];} rows[i]=sum;}
        for(int j=0; j < n; j++) {sum = 0; for(int i=0; i < n; i++) {sum+=arr[i][j];} cols[j]=sum;}
        sum = 0;
        for(int i=0; i < n; i++) {sum+=arr[i][i];} if(sum != rows[0]) {cout << -1 << endl; exit(0);}
        sum = 0; for(int i=0; i < n; i++) {sum+=arr[i][n-i-1];} if(sum != cols[0]) {cout << -1 << endl; exit(0);}
        for(int i=1; i < n; i++) if(rows[i] != rows[i-1]) {cout << -1 << endl; exit(0);}
        for(int j=1; j < n; j++) if(cols[j] != cols[j-1]) {cout << -1 << endl; exit(0);}
        cout << max_sum-a << endl;
    }else if(max_sum-a == 0 && n == 1) cout << 1 << endl;
    else cout << -1 << endl;
    return 0;
}