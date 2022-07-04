#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum;
    sum = (n*(n+1))/2;
    printf("%d\n", (int)(sum%2));
    return 0;
}