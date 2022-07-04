#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a > c) swap(a, c);
    if(b > c) swap(b, c);
    if(a > b) swap(a, b);
    int count = 0;
    if(b-a < d) {count+=d-b+a;}
    if(c-b < d) {count+=d-c+b;}
    printf("%d\n", count);
    return 0;
}