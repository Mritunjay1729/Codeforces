#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, n;
    cin >> t;
    vector<ll> cakes;
    ll cake, sum = 0, total_sum, flag = 0;
    while(t--) {
        cin >> n;
        cakes.clear();
        total_sum = sum = flag = 0;
        for(int i=0; i < n; i++) {cin >> cake; total_sum+=cake; cakes.push_back(cake);}
        if(total_sum < 0) {cout << "NO\n"; continue;}
        int start = 0, end = 0;
        for(int i=0; i < n; i++) {
            if(sum + cakes[i] < 0) {
                sum = 0;
            } else {
                if(sum == 0) start = i;
                sum+=cakes[i];
                if(sum >= total_sum) {end = i; flag = 1; break;}
            }
        }
        // cout << sum << " " << total_sum << endl;
        if(flag == 1) {
            if(start == 0 && end == n-1) cout << "YES\n";
            else cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}