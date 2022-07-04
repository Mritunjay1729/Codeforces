#include <iostream>
#include <vector>

using namespace std;

int count(int a, int b) {
    int val = 0;
    while(a > 0 && b > 0) {
        val += ((a&1)^(b&1));
        a>>=1;
        b>>=1;
    }
    while(a > 0) {val+=a&1; a>>=1;}
    while(b > 0) {val+=b&1; b>>=1;}
    return val;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> players(m+1);
    for(int i=0; i < m+1; i++) cin >> players[i];
    int target = players[m], frnds = 0;
    for(int i=0; i < m; i++) {
        if(count(target, players[i]) <= k) frnds++;
    }
    cout << frnds << endl;
    return 0;
}