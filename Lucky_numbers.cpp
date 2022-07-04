#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

vector<ll> superLucky;

void findSuperLucky(ll val, int f, int s) {
    if(val > 10000000000LL) return;
    if(f == s) superLucky.push_back(val);
    findSuperLucky(val*10LL+4, f+1, s);
    findSuperLucky(val*10LL+7, f, s+1);
}

int main() {
    ll n;
    cin >> n;
    findSuperLucky(0, 0, 0);
    sort(superLucky.begin(), superLucky.end());
    int i = lower_bound(superLucky.begin(), superLucky.end(), n)-superLucky.begin();
    cout << superLucky[i] << endl;
    return 0;
}