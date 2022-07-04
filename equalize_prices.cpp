#include <iostream>

using namespace std;

int main() {
    int q, n, k, num;
    int mx = 0, mn = INT32_MAX;
    cin >> q;
    while(q--) {
        mx = 0; mn = INT32_MAX;
        cin >> n >> k;
        while(n--) {
            cin >> num;
            if(num > mx) mx = num;
            if(num < mn) mn = num;
        }
        if(abs(mx-mn-k) <= k) printf("%d\n", k+mn);
        else printf("%d\n", -1);
    }
    return 0;
}