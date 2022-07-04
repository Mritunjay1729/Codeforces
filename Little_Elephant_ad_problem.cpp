#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> arr(n), sorted(n);
    for(int i=0; i < n; i++) {
        cin >> arr[i];
        sorted[i] = arr[i];
    }
    
    int wrongs = 0;
    sort(sorted.begin(), sorted.end());
    for(int i=0; i < n; i++) {
        if(arr[i] != sorted[i]) wrongs++;
    }
    if(wrongs<=2) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}