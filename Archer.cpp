#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long double a, b, c, d;
    cin >> a >> b >> c >> d;
    long double fw = a/b, fl = 1-(a/b);
    long double sl = 1-(c/d), p = 1, ans=0;
    for(int i=0; i < 100000; i++) {
        ans+=fw*p;
        p*=fl*sl;
    }

    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}