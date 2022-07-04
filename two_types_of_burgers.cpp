#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    int a, b, c;
    int h, ch, cost;
    while (t--) {
        cin >> a >> b >> c;
        a/=2;
        cin >> h >> ch;
        cost = 0;
        if(h < ch) {swap(b, c); swap(h, ch);}
        if(a > b) {
            cost+=b*h;
            a-=b;
            if(a > c) cost+=c*ch;
            else cost+=a*ch;
            printf("%d\n", cost);
        }
        else {printf("%d\n", a*h); continue;}
    }
    return 0;
}