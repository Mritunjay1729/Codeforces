#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int dp[105][3];

int minTime(vector<int> &arr, int index, int last) {
    if(index >= arr.size()) return 0;
    if(dp[index][last] != -1) return dp[index][last]; 

    if(arr[index] == 0)
        dp[index][last] =  1 + minTime(arr, index+1, 0);
    else if(arr[index] == 1) {
        if(last == 1) dp[index][last] = 1 + minTime(arr, index+1, 0);
        else dp[index][last] = min(1 + minTime(arr, index+1, 0), minTime(arr, index+1, 1)); 
    }else if(arr[index] == 2) {
        if(last == 2) dp[index][last] = 1 + minTime(arr, index+1, 0);
        else dp[index][last] = min(1 + minTime(arr, index+1, 0), minTime(arr, index+1, 2));
    }else{
        if(last == 1) dp[index][last] = min(1 + minTime(arr, index+1, 0), minTime(arr, index+1, 2));
        else if(last == 2) dp[index][last] = min(1 +  minTime(arr, index+1, 0), minTime(arr, index+1, 1));
        else if(last == 0) dp[index][last] = min(1+minTime(arr, index+1, 0), min(minTime(arr, index+1, 1), minTime(arr, index+1, 2))); 
    }
    return dp[index][last];
}

int main() {
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    cout << minTime(arr, 0, 0) << endl;
    return 0;
}