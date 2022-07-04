#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(2*n);
    set<int> count;
    for(int i=0; i <2*n; i++) {cin >> arr[i]; count.insert(arr[i]);}
    if(count.size()==1) printf("%d\n", -1);
    else {
        sort(arr.begin(), arr.end());
        for(int i=0; i < 2*n; i++) printf("%d ", arr[i]);
        cout << endl;
    }
    return 0;
}