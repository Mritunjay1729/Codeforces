#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;
    cin >> n;
    vector<int> arr(n, -1);
    for(int i=0; i < n; i++) {
        cin >> t;
        if(t <= n && arr[t-1] == -1) arr[t-1] = 1;
    }

    int count = 0;
    for(int i=0; i < n; i++) count += (arr[i]==-1);
    cout << count << endl; 
    return 0; 
}