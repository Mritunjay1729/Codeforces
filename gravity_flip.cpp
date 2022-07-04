#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, height;
    cin >> n;
    vector<int> arr;
    while(n--) {
        cin >> height;
        arr.push_back(height);
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i < arr.size(); i++) printf("%d ", arr[i]);
    cout << endl;
    return 0;
}