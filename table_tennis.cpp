#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> power(n);
    ll max_power = 0, max_index;
    for(int i=0; i<n; i++) {
        cin >> power[i]; 
        if(power[i] > max_power) {
            max_power = power[i];
            max_index = i+1;
        }
    }
    if(k >= max_index) {cout << max_power << endl; exit(0);}
    vector<int> winnings(n);
    ll winner = 0;
    for(int i=1; i < n; i++) {
        if(power[i] > power[winner]) winner = i;
        winnings[winner]++;
        if(winnings[winner] == k) {cout << power[winner] << endl; exit(0);}
    }
    cout << max_power << endl;
    return 0;
}