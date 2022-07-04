#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    if(a == b) cout << "YES" << endl;
    else if(c == 0) cout << "NO" << endl;
    else if(((b-a)>0)^(c<0) && (b-a)%c==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}