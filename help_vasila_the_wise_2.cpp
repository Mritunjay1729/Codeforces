#include <iostream>

using namespace std;

int main() {
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int x, y, a, b;
    if((c1+d1-r2)%2 == 0) x = (c1+d1-r2)/2;
    else {printf("-1\n"); exit(0);}
    if((c1+r2-d1)%2 == 0) y = (c1+r2-d1)/2;
    else {printf("-1\n"); exit(0);}
    if((c2+r1-d1)%2 == 0) a = (c2+r1-d1)/2;
    else {printf("-1\n"); exit(0);}
    if((c2+d1-r1)%2 == 0) b = (c2+d1-r1)/2;
    else {printf("-1\n"); exit(0);}
    if(
        x <= 0 || x > 9 ||
        y <= 0 || y > 9 ||
        a <= 0 || a > 9 ||
        b <= 0 || b > 9 ||
        a == b ||  a == x || a == y ||
        b == x || b == y ||
        x == y
    ) {printf("-1\n"); exit(0);}
    printf("%d %d\n%d %d\n",x, a, y, b);
    return 0;
}