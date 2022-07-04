#include <iostream>
#include <vector>
#define ll long long int

using namespace std;


//TLE O(n^2)
int main() {
    ll n, num;
    cin >> n;
    vector<ll> arr;
    for(ll i=0; i < n; i++) {
        cin >> num;
        if(num > 0) arr.push_back(1);
        else arr.push_back(-1);
    }

    vector<ll> ways;
    ll p =1;
    int neg = 0;
    for(ll i=0; i < n; i++) {p*=arr[i]; ways.push_back(p); if(p < 0) neg++;}
    ll start = 0, gap = 0;
    for(ll j=1; j < n; j++) {
        // cout << ways.size() << endl;
        p=arr[j-1];
        for(ll i=j; i < n; i++) {
            ways[i]/=p;
            if(ways[i] < 0) neg++;
        }
    }

    cout << neg << " " << (n*(n+1))/2-neg << endl;
}