#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin>> a >> b;
    if(a < b) swap(a, b);
    printf("%d %d\n", b, (a-b)/2);
    return 0;
}