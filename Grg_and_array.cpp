#include <iostream>
#include <vector>
#define ll long long int
#define fl(n) for(int i=0; i < n; i++)
#include <map>
#define prt pair<pair<int, int>, ll>
#define pr pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> arr(n);
    fl(n) cin >> arr[i];
    int l, r, d;
    vector<prt> order;
    fl(m) {
        cin >> l >> r >> d;
        order.push_back({{l, r}, d});
    }

    vector<ll> number_of_operations(m+1, 0);
    while(k--) {
       cin >> l >> r;
       number_of_operations[l-1]++;
       number_of_operations[r]--;
    }

    ll s = 0;
    fl(m+1) {s+=number_of_operations[i]; number_of_operations[i] = s;}

    vector<ll> sum(n+1, 0);
    pr val;
    fl(m) {
        val = order[i].first;
        sum[val.first-1] += number_of_operations[i]*order[i].second;
        sum[val.second] -= number_of_operations[i]*order[i].second;
    }

    s = 0;
    fl(n) {
        s+=sum[i];
        arr[i]+=s;
    }
    fl(n) cout << arr[i] << " ";
    cout << endl;
    return 0;
}