#include <iostream>

using namespace std;

int main() {
    int n, a, s;
    cin >> n >> a >> s;
    if(s >= 0) printf("%d\n", (a+s)%n==0?n:(a+s)%n);
    else printf("%d\n", (n+(a+s)%n)%n==0?n:(n+(a+s)%n)%n);
    return 0;
}