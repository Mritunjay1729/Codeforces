#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    int i=1;
    while(i < n && arr[i] >= arr[i-1]) i++;
    if(i == n) {cout << 0 << endl; exit(0);}
    for(int j=i+1; j < n; j++) if(arr[j] < arr[j-1]) {cout << -1 << endl; exit(0);}
    if(arr[n-1] <= arr[0]) cout << n-i << endl;
    else cout << -1 << endl;
    return 0;
} 