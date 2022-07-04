#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;
    int a, b, c;
    while(q--) {
        cin >> a >> b >> c;
        int count = min(a, b);
        if(count < c) {cout << count << endl; continue;}
        if(count < (a+b+c)/3) cout << count << endl;
        else cout << (a+b+c)/3 << endl;
    }
    return 0;
}