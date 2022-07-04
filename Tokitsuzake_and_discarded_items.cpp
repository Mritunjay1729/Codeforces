#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ll n, s, p, items;
    cin >> n >> s >> p;
    vector<ll> special(s);
    for(ll i=0; i < s; i++) cin >> special[i];
    ll start = 1, end = start+p-1, j = 0, count = 0;
    ll operations = 0;
    while(j < s) {
        while(j < s && special[j] <= end) {count++; j++;}
        // cout << start << " " << end << " " << count << " "  << special[j] << endl;
        if(count > 0) operations++;
        if(j < s) {
            end+=count;
            if(special[j] > end) {
                start = end + p*((special[j]-end-1)/p) + 1;
                end = start + p - 1;
            }
            count = 0;
        }
    }
    cout << operations << endl;
    return 0;
}