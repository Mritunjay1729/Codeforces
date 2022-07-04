#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int l, r, count = 0;
    for(int i=0; i < n; i++) {
        cin >> l >> r;
        count+=(r-l+1);
    }
    cout << (count%k == 0?0:k-count%k) << endl;
    return 0;
}