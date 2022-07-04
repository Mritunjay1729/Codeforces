#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 > x2) {swap(x1, x2); swap(y1, y2);}
    if(x1 != x2 && y1 != y2 && abs(x1-x2) != abs(y1-y2)) printf("-1\n");
    else {
        if(x1 == x2) {
            int d = abs(y1-y2);
            if(x1 < 100) printf("%d %d %d %d\n", x1+d, y1, x1+d, y2);
            else printf("%d %d %d %d\n", x1-d, y1, x1-d, y2);
        } else if(y1 == y2) {
            int d = abs(x1-x2);
            if(y1 < 100) printf("%d %d %d %d\n", x1, y1+d, x2, y1+d);
            else printf("%d %d %d %d\n", x1, y1-d, x2, y1-d);
        } else {
            int d = abs(x2-x1);
            printf("%d %d %d %d", x1, y2, x2, y1);
        }
    }
    return 0;
}