#include <iostream>
#include <map>
#include <set>
#define ll long long int
#define pr pair<ll, ll>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    map<ll, ll> xcoords, ycoords;
    map<pr, ll> common;
    ll count = 0;
    int n;
    cin >> n;
    ll x, y;
    while(n--) {
        cin >> x >> y;
        xcoords[x]++;
        ycoords[y]++;
        common[{x, y}]++;
    }

    for(auto mp : xcoords) count+=(mp.second*(mp.second-1))/2;
    for(auto mp : ycoords) count+=(mp.second*(mp.second-1))/2;
    for(auto mp : common) count-=(mp.second*(mp.second-1))/2;
    cout << count << endl;
    return 0;
}