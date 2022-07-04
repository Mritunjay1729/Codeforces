#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> pattern = {4, 8, 15, 16, 23, 42};
    int n, t;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; ++i) {
        cin >> t;
        arr[i] = lower_bound(pattern.begin(), pattern.end(), t)-pattern.begin();
    }

    vector<int> seq(6);
    for(int i=0; i < n; ++i)  {
        if(arr[i] == 0) seq[0]++;
        else {
            if(seq[arr[i]-1] > 0) {
                --seq[arr[i]-1];
                ++seq[arr[i]];
            }
        }
    }
    cout << n-6*seq[5] << endl;
    return 0;
}