#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, l, r, d;
    cin >> n >> l >> r >> d;
    vector<int> arr(n);
    int result = 0;
    for(int i=0; i < n; i++) cin >> arr[i];
    for(int i=0; i < (1<<n); i++) {
        int sum = 0, mn = INT32_MAX, mx=-1;
        for(int j=0; j < n; j++) {
            if(i & (1<<j)) {
                sum+=arr[j];
                mn = min(mn, arr[j]);
                mx = max(mx, arr[j]);
            }
        }
        if(sum >= l && sum <= r && mx-mn >= d) result++;
    }
    cout << result << endl;
    return 0;
}