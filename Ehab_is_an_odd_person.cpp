#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e, o;
    e = o = 0;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i <n; i++) {cin>>arr[i]; arr[i]%2?o++:e++;}
    if(e > 0 && o > 0) sort(arr.begin(), arr.end());
    for(int i=0; i <n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}