#include <set>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int p, n;
    cin >> p >> n;
    set<int> val;
    vector<int> arr(n);
    for(int i=0; i <  n; i++) cin >> arr[i];
    for(int i=0; i < n; i++) {
        if(val.find(arr[i]%p) != val.end()) {
            cout << i+1 << endl;
            exit(0);
        }
        val.insert(arr[i]%p);
    }
    cout << -1 << endl;
    return 0;
}