#include <iostream>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int kl = k*l;
    int cd = c*d;
    printf("%d\n", min(kl/nl, min(cd, p/np))/n);
    return 0;
}