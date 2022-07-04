#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int mx = a+b+c;
    mx = max(mx, (a*b)+c);
    mx = max(mx, (a+b)*c);
    mx = max(mx, a+(b*c));
    mx = max(mx, a*(b+c));
    mx = max(mx, a*b*c);
    printf("%d\n", mx);
    return 0;
}