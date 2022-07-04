#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, num;
    vector<int> arr;
    set<int> check;
    vector<int> narr;
    cin >> n;
    for(int i=0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }

    for(int i=n-1; i >=0; i--) {
        if(check.find(arr[i]) == check.end()){
            check.insert(arr[i]);
            narr.push_back(arr[i]);
        }
    }
    cout << narr.size() << endl;
    for(int i=narr.size()-1; i >=0; i--) {
        printf("%d ", narr[i]);
    }
    cout << endl;
    return 0;
}