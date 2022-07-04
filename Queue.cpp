#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    // for(auto s : arr) cout << s << " ";
    // cout << endl;
    int time = 0;
    int not_disappointed = 0;
    for(int i=0; i < n; i++) {
        if(time <= arr[i]) {not_disappointed++; time+=arr[i];}
    }
    cout << not_disappointed << endl;
}