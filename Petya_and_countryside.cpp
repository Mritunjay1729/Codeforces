#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    int ans = 0;
    for(int i=0; i < n; i++) {
        int temp = 0;
        for(int j=i-1; j >= 0; j--) {
            if(arr[j] <= arr[j+1]) temp++;
            else break; 
        }

        for(int j=i+1; j < n; j++) {
            if(arr[j] <= arr[j-1]) temp++;
            else break;
        }
        ans = max(ans, temp+1);
    }
    cout << ans << endl;
    return 0;
}