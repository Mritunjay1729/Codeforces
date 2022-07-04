#include <iostream>
#include <set>

using namespace std;

bool check(int n, set<int> &digits) {
    digits.clear();
    while(n > 0) {
        if(digits.find(n%10) != digits.end()) break;
        digits.insert(n%10);
        n/=10;
    }
    return (n == 0);
}

int main() {
    int l, r;
    cin >> l >> r;
    set<int>  digits;
    for(int i=l; i <= r; i++) {
        if(check(i, digits)) {cout << i << endl; exit(0);}
    }
    cout << -1 << endl;
}