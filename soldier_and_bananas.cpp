#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int price = k*(w*(w+1))/2;
    printf("%d\n", max(0, price-n));
    return 0;
}