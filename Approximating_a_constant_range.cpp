#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    multiset<int> vals;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    int mx, mn;
    mx = 0, mn = INT32_MAX;
    int ans = 0, j = 0;
    for(int i=0; i < n; i++) {
        vals.insert(arr[i]);
        mx = (*vals.rbegin());
        mn = (*vals.begin());
        while(mx-mn>1) {
            vals.erase(vals.find(arr[j]));
            mx = (*vals.rbegin());
            mn = (*vals.begin());
            j++;
        }
        ans = max((int)vals.size(), ans);
    }
    cout << ans << endl;
    return 0;
}