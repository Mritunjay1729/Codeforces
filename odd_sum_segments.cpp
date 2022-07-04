#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll q;
    cin >> q;
    ll n, k, i, num, sum = 0;
    vector<int> res;
    while(q--) {
        sum  = 0;
        res.clear();
        cin >> n >> k;
        for(i=0; i < n; i++) {
            cin >> num;
            sum+=num;
            if(sum%2 == 1 && res.size() < k-1) {sum=0; res.push_back(i+1);}
        }
        if(sum%2 == 1) res.push_back(n);
        if(res.size() == k) {
            cout << "YES" << endl;
            for(int i=0; i < k; i++) cout << res[i] << " ";
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    } 
    return 0;
}