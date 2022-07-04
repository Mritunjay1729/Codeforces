#include <iostream>
#include <vector>
#define ll long long 
#define pr pair<ll, ll>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, q;
    cin >> n >> q;
    ll prev = 1;
    vector<pr> dormitory;
    ll a;
    for(int i=0; i < n; i++) {
        cin >> a;
        dormitory.push_back({prev, prev+a-1});
        prev = prev+a;
    }

    ll d;
    int l = 0, r = n-1, mid;
    while(q--) {
        cin >> d;
        l = 0, r = n-1;
        while(l <= r) {
            mid = (l+r)/2;
            if(d >= dormitory[mid].first && d <= dormitory[mid].second) break;
            else if(dormitory[mid].first > d) r = mid-1;
            else l = mid+1;
        }
        cout << mid+1 << " " << d-dormitory[mid].first+1 << endl;
    }
    return 0;
}