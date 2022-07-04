#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    for(int i=0; i < n; i+=2) cout << arr[i] << " ";
    for(int i=n-1-(n%2); i>=0; i-=2) cout << arr[i] << " ";
    cout << endl;
    return 0;
}