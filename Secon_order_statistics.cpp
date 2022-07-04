#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int mn, smn;
    mn = smn = -1;
    int num;
    for(int i=0; i < n; i++) {
        cin >> num;
        if(mn == -1) {mn = num;}
        else if(num < mn) {smn = mn; mn = num;}
        else if(smn != -1 && num != mn && num < smn) smn = num;
        else if(smn == -1 && mn != num) smn = num; 
    }
    if(smn == -1) cout << "NO" << endl;
    else cout << smn << endl;
    return 0;
}