#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int arr[200001], index[200001];
    bool beautiful[200001];
    int t, n;
    cin >> t;
    set<int> check;
    int left, right, k;
    while(t--) {
        cin >> n;
        check.clear();
        memset(beautiful, false, n+1);
        for(int i=1; i<=n; i++) {
            cin >> arr[i];
            index[arr[i]] = i;
        }
        left = right = index[1];
        beautiful[1] = true;
        check.insert(1);
        for(int i=2; i <= n; i++) {
            k = index[i];
            if(left <= k && k <= right) {
                if(check.size() == i) beautiful[i] = true;
            } 
            else if(left > k) {
                for(int j=left-1; j >= k; j--) {
                    check.insert(arr[j]);
                }
                left = k;
            } else if(right < k) {
                for(int j=right+1; j <=k; j++) {
                    check.insert(arr[j]);
                }
                right = k;
            }

            if(check.size() == i) beautiful[i] = true;
        }

        string result;
        for(int i=1; i <= n; i++) {
            if(beautiful[i]) result.push_back('1');
            else result.push_back('0');
        }
        cout << result << endl;
    }
    return 0;
}