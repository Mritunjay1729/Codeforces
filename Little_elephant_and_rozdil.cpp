#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int min_time = INT32_MAX;
    for(int i=0; i < n; i++) {cin >> arr[i]; min_time = min(arr[i], min_time);}
    int count = 0, index = -1;
    int i=0;
    for(i=0; i < n; i++) {
        if(arr[i] == min_time && index == -1) index = i+1;
        else if(arr[i] == min_time) break;
    }
    if(i < n) cout << "Still Rozdil" << endl;
    else cout << index << endl;
    return 0;
}