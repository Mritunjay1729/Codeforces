#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll a, b, n;
    cin >> a >> b >> n;
    n--;
    a*=10;
    if(a%b != 0 && b-a%b > 9) {cout << -1 << endl; exit(0);}
    if(a%b != 0) a += b-a%b;
    string str;
    cout << a;
    while(n--) cout << "0";
    cout << endl;
    return 0;
}