#include <iostream>

using namespace std;

int main() {
    int n,  k;
    cin >> n >> k;
    int mod = n%k;
    printf("%d\n", n+k-mod);
    return 0;
}