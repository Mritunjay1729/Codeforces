#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a >= 2*b) cout << b << endl;
    else if(b >= 2*a) cout << a << endl;
    else cout << (a+b)/3 << endl;
    return 0;
}