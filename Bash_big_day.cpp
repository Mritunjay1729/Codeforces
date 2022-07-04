#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> count;
    int ans = 0;
    int mx =  0;
    for(int i=0; i < n; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        if(arr[i] == 1) continue;
        count[arr[i]]++;
        ans = max(ans, count[arr[i]]);
    }

    if(mx == 1) {cout << 1 << endl; exit(0);}
    for(int i=0; i < n; i++) {
        for(int j=2; j*j <= arr[i]; j++) {
            if(arr[i]%j == 0) {
                count[j]++;
                ans = max(ans, count[j]);
                if(arr[i]/j !=  j) {count[arr[i]/j]++; ans = max(ans, count[arr[i]/j]);}
            }
        }
    }
    cout << ans << endl;
    return 0;
}