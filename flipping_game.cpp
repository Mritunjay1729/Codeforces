#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, num;
    cin >> n;
    int max_val = 0, val = 0, ones = 0;
    for(int i=0; i < n; i++) {
        cin >> num;
        if(num == 1) {
            max_val = max(val, max_val);
            ones++;
            if(val > 0) val--;
        } else {
            val++;
        }
        // cout << val << " " << max_val << endl;
    }
    max_val = max(val, max_val);
    if(ones == n) printf("%d\n", n-1);
    else printf("%d\n", ones+max_val);
    return 0;
}