#include <iostream>
#include <vector>
#define pr pair<int, int>
#define ll long long int
#include <algorithm>

using namespace std;

int main() {
    int n;
    ll l, x;
    cin >> n;
    vector<ll> mnval, mxval;
    ll mn, mx, type = 0;
    for(ll i=0; i < n; i++) {
        cin >> l;
        cin >> x;
        type = 0;
        mn = mx = x;
        for(ll j=1; j < l; j++) {
            cin >> x;
            if(x > mn) {
                type = -1;
            } 
            mn = min(mn, x);
            mx = max(mx, x);
        }
        if(type != -1) {
            mnval.push_back(mn);
            mxval.push_back(mx);
        }
    }

    ll left, count = 0, val;
    sort(mnval.begin(),mnval.end());
    sort(mxval.begin(), mxval.end());
    for(ll i=0; i < mnval.size(); i++) {
        val = mnval[i]+1;
        left = lower_bound(mxval.begin(), mxval.end(), val) - mxval.begin();
        count+=left;
    }
    cout << (ll)n*n - count << endl;
    return 0;
}