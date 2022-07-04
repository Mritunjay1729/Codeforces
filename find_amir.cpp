#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; //number of schools
    printf("%d\n", (n+1)/2-1); // (1+n)/2 - 1 criss-cross paths
    return 0;
}