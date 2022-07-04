#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n+1, -1);
    int a, b;
    for(int i=0; i < k; i++) {
        cin >> a >> b;
        arr[a] = 1;
        arr[b] = 1;
    }
    
    cout << n-1 << endl;
    int joint = -1;
    for(int i=1; i < arr.size(); i++) if(arr[i] == -1) {joint = i; break;}
    for(int i=1; i <= n; i++) {
        if(i == joint) continue;
        cout << i << " " << joint << endl;
    }
    return 0;
}