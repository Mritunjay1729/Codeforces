#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if(k >= n) {cout << -1 << endl; exit(0);}
    vector<int> arr(n);
    for(int i=1; i <= n; i++) arr[i-1] = i;
    int i=1;
    while(k--) i++;
    while(i < n) {
        if(i == n-1) swap(arr[0], arr[n-1]);
        else swap(arr[i], arr[i+1]);
        i+=2;
    }
    for(int i=0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}