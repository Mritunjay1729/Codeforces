#include <iostream>
#include <vector>

using namespace std;

int attractiveness(vector<int> &arr, int pos) {
    int sum, max_sum=INT32_MIN, count, j, begin;
    for(int i=0; i < pos; i++) {
        sum = 0, count = 0;
        begin = i;
        for(j=i; j < arr.size(); j+=pos) {
            sum+=arr[j];
            count++;
        }
        if(count >= 3 && j%arr.size() == begin) max_sum = max(sum, max_sum);
    }
    return max_sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    int res = INT32_MIN, ans;
    for(int i=1; i < (n+1)/2; i++) {
        ans = attractiveness(arr, i);
        res = max(ans, res);
    }
    cout << res << endl;
    return 0;
}