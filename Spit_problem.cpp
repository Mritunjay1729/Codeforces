#include <iostream>
#include <set>
#define pr pair<int, int>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<pr> spit;
    int x, y, flag = 0;
    for(int i=0; i < n; i++) {
        cin >> x >> y;
        if(flag == 1) continue;
        y+=x;
        if(spit.find({y, x}) != spit.end()) {flag = 1;}
        spit.insert({x, y});
    }
    if(flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}