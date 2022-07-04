#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int start = 1;
    int l, r, count = 0;
    while(n--) {
        cin >> l >> r;
        while(start + x <= l) start += x;
        count += (r-start+1); 
        // cout << start << " " <<  count << endl;
        start = r+1;
    }
    printf("%d\n", count);
    return 0;
}