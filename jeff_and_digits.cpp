#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    int five, zero;
    five = zero = 0;
    for(int i=0; i < n; i++) {
        cin >> k;
        k == 5? five++: zero++;
    }
    five/=9;
    string str ="";
    if(zero == 0) {printf("-1\n"); exit(0);}
    while(five--) str.append("555555555");
    if(str != "") {
        while(zero--) str.push_back('0');
    }
    else str.push_back('0');
    cout << str << endl;
    return 0;
}