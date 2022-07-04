#include <iostream>

using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;
    long long x, y, z;
    cin >> x >> y >> z;
    m-=(2*x+y);
    n-=(y+3*z);
    long long sum = 0;
    if(m < 0) sum-=m;
    if(n < 0) sum-=n;
    printf("%lld\n", sum);
    return 0;
}