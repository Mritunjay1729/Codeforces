#include <iostream>
#include <vector>
#include <algorithm>
#define fl(start, n) for(int i=start; i < n; i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> arr(n);
    fl(0, n) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int i=0, j=1, maximal_count = 0;
    while(arr[j] == arr[i] && j < n) j++;
    while(j < n) {
        if(arr[i] < arr[j]) {maximal_count++; i++;}
        j++;
    }
    cout << maximal_count << endl;
    return 0;
}