#include <iostream>

using namespace std;

int main() {
    int k, d;
    cin >> k >> d;
    if(d == 0 & k != 1) {printf("No solution\n"); exit(0);}
    string res;
    res.push_back(d+'0');
    k--;
    while(k--) res.push_back('0');
    cout << res << endl;
    return 0;
}