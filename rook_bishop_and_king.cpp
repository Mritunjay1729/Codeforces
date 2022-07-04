#include <iostream>

using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    printf("%d ", (r2-r1 != 0)+(c2-c1 != 0));
    if((r1+c1)%2 != (r2+c2)%2) printf("0 ");
    else printf("%d ", (abs(r2-r1) == abs(c2-c1))?1:2);
    printf("%d\n", max(abs(c2-c1), abs(r2-r1)));
    return 0;
}