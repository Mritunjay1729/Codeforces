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
    // for(auto num : arr) cout << num << " ";
    // cout << endl;
    int i=0, sum = 0, count = 0;
    while(i < n) {
      sum = 1;
      arr[i] = -1;
      for(int j = i+1; j < n; j++) {
        if(sum <= arr[j]) {
            sum+=1;
            arr[j] = -1;
        }
      }
      count++;
      while(i < n && arr[i] == -1) i++;
    }
    cout << count << endl;
    return 0;
}