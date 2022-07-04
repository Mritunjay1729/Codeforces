#include <iostream>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    int mx, smx, mn, smn;
    mx = smx = INT32_MIN;
    mn = smn = INT32_MAX;
    while(n--) {
        cin >> num;
        if(num >= mx) {smx = mx; mx = num;}
        else if(num >= smx) {smx = num;}
        if(num <= mn) {smn = mn; mn = num;}
        else if(num <= smn) {smn = num;}
    }
    // printf("%d %d %d %d\n", mx, smx, mn, smn);
    printf("%d\n", min(mx-smn, smx-mn));
    return 0;
}