#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canPlaceCows(vector<int> arr, int cows, int distance) {
    int init = arr[0], count = 1;
    for(int i=1; i < arr.size(); i++) {
        if(arr[i]-init>=distance) {
            init = arr[i]; 
            count++;
            if(count == cows) return true;
        }
    }
    return false;
}

int main() {
    int n, cows;
    cin >> n >> cows;
    vector<int> stalls(n);
    for(int i=0; i < n; i++) {
        cin >> stalls[i];
    }
    sort(stalls.begin(), stalls.end());
    
    int i=1, j=stalls[n-1]-stalls[0], mid, res;
    while(i <= j) {
        mid = (i+j)>>1;
        if(canPlaceCows(stalls, cows, mid)) {res = mid; i=mid+1;}
        else j=mid-1;
        // cout << mid << " " << res << endl;
    }
    cout << res << endl;
    return 0;
}