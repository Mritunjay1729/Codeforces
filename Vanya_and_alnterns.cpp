#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    double max_diff = 0;
    for(int i=1; i < n; i++) {
        max_diff = max(max_diff, (arr[i]-arr[i-1])/2.0);
    }
    if(arr[0] != 0) max_diff = max(max_diff, (double)arr[0]);
    if(arr[n-1] != m) max_diff = max(max_diff, (double)(m-arr[n-1]));
    cout << fixed << setprecision(10) << max_diff << endl;
    return 0;
}