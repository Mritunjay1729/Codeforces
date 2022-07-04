#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, x;
    vector<int> arr(3);
    while(t--) {
        for(int i=0; i < 3; ++i) arr[i]=0;
        cin >> n;
        for(int i=0; i < n; ++i) {
            cin >> x;
            arr[x%3]++; 
        }
        int result = arr[0], x;
        x=min(arr[1], arr[2]); arr[1]-=x; arr[2]-=x; result+=x;
        result+=arr[1]/3; arr[1]%=3;
        result+=arr[2]/3; arr[2]%=3;
        cout << result << endl;
    }
    return 0;
}