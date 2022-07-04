#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int x = 1, days = 0;
    int i=0;
    while(i < n) {
        if(arr[i] == -1) {i++; continue;}
        int k = arr[i]/x + (arr[i]%x > 0);
        if(k*x == arr[i]) {days+=k; arr[i] = -1; i++;}
        else {
            int j = lower_bound(arr.begin(), arr.end(), k*n)-arr.begin();
            if(j == n || arr[j] != k*n) j--;
            while(arr[j] == -1) j--;
            arr[j] = -1;
            days+=k;
        }
        x++;
    }
    cout << days << endl;
    return 0;
}