#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, k, h;
    vector<int> arr;
    while(t--) {
        cin >> n >> k;
        arr.clear();
        for(int i=0; i < n; i++) {cin >> h; arr.push_back(h);}
        if(k == 1) cout << (n-1)/2 << endl;
        else {
            int t =0;
            for(int i=1; i < n-1; i++) if(arr[i] > arr[i-1]+arr[i+1]) t++;
            cout << t << endl;
        }
    }
    return 0;
}