#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    int i=1, max_count = 1, count = 2;
    for(i=2; i < n; i++) {
        if(arr[i] == arr[i-1]+arr[i-2]) {
            count++;
        }else{
            max_count = max(count, max_count);
            count = 2;
        }
    }
    max_count = max(count, max_count);
    cout << min(n, max_count) << endl;
    return 0;
}