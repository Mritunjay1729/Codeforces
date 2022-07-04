#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    printf("%d\n", min(n-a, b+1));
    return 0;
}