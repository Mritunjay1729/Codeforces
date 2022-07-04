#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int m, n, a, b;
    cin >> m >> n;
    a = sqrt(m);
    b = sqrt(n);
    if(b+b*b > n) b--;
    if(a > b) printf("Valera\n");
    else printf("Vladik\n");
    return 0;
}