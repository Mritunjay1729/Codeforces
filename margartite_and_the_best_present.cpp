#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;
    int l, r, res1, res2;
    while(q--) {
        cin >> l >> r;
        res1 = l/2 - (((l-1)%2)?(l):0);
        res2 = (r+1)/2 - ((r%2)?(r+1):0);
        // printf("%d %d\n", res1, res2);
        printf("%d\n", res2 - res1);
    }
    return 0;
}