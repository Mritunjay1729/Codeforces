#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x , y;
    x = y = 0;
    while(b+a*x != d+c*y && x < 1000 && y < 1000) {
        if(b+a*x < d+c*y) x++;
        else y++;
    }
    if(x == 1000 || y == 1000) printf("%d\n", -1);
    else printf("%d\n", b+a*x);
    return 0;
}