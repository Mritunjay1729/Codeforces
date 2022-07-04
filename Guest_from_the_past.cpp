#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll r, a, b, c;
    cin >> r >> a >> b >> c;
    ll bottles = 0;
    if(a <= (b-c) || b > r) {
        bottles+=r/a;
    } else {
        bottles+=(r-c)/(b-c);
        r = (r-c)%(b-c)+c;
        bottles+=r/a;
    }
    cout << bottles << endl;
    return 0;
}