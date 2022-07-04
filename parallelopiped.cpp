#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = sqrt((a*b)/c);
    printf("%d\n", 4*(d+(a/d)+(b/d)));
    return 0;
}