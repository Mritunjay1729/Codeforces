#include <iostream>
#define calc(x, t) max(3*x/10, x- (x*t)/250)

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = calc(a, c);
    b = calc(b, d);
    if(a==b) printf("Tie\n");
    else if(a > b) printf("Misha\n");
    else printf("Vasya\n");
    return 0;
}