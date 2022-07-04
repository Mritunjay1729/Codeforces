#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;
    int n, x, a, b;
    while(q--) {
        cin >> n  >> x >> a >> b;
        if(a > b) swap(a, b);
        if(n-b>=x) {b+=x; x=0;}
        else {x=x-(n-b); b = n;}
        if(x > 0) {
            if(a-1 >= x) {a-=x;}
            else {a=1;}
        } 
        cout << b-a << endl;
    }
    return 0;
}