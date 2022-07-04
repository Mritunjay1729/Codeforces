#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b) swap(a, b);
    int count = 0;
    count += 2*b;
    a-=b;
    if(a > 0) count+=2*min(c, a);
    if(c > a) {c-=a; count+=2*(c/2);}
    printf("%d\n", count);
    return 0;
}