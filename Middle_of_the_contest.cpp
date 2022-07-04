#include <iostream>

using namespace std;

int main() {
    int sh, sm, lh, lm;
    char c;
    cin >> sh >> c >> sm;
    cin >> lh >> c >> lm;
    int min=(lh-sh)*60+(lm-sm);
    min/=2;
    sh+=min/60;
    sm+=(min%60);
    if(sm >= 60) {sm%=60; sh+=1;}
    if(sh < 10) cout << "0" << sh << ":";
    else cout << sh << ":";
    if(sm < 10) cout << "0" << sm << endl;
    else cout << sm << endl;
    return 0;
}