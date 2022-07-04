#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    map<int, int> count;
    for(int i=0; i < n; i++) {
        cin >> k;
        count[k]++;
    }

    vector<int> arr1, arr2;
    for(auto cnt : count) {
        if(cnt.second > 2) {cout << "NO" << endl; exit(0);}
        else {
            arr1.push_back(cnt.first);
            if(cnt.second == 2) arr2.push_back(cnt.first);
        }
    }
    reverse(arr2.begin(), arr2.end());
    cout << "YES" << endl;
    cout << arr1.size() << endl;
    for(int i=0; i < arr1.size(); i++) cout << arr1[i] << " ";
    cout << endl;
    cout << arr2.size() << endl;
    for(int i=0; i < arr2.size(); i++) cout << arr2[i] << " ";
    if(arr2.size() > 0) cout << endl;
    return 0;
}