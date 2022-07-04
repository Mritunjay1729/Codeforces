#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int sum= 0;
    for(int i=0; i < k; i++) {
        if(arr[i] < 0) sum-=arr[i];
        else break;
    }
    cout << sum << endl;
    return 0;
}