#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    printf("%d\n", n/5 + ((n%5==0)?0:1));
    return 0;
}