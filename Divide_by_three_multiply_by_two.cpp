#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;

bool check(vector<ll> &arr, vector<bool> &visited, vector<ll> &order, int curr) {
    order.push_back(arr[curr]);
    visited[curr] = true;
    if(order.size() == arr.size()) return true;
    bool ans = false;
    if(arr[curr]%3 == 0) {
        int index =  lower_bound(arr.begin(), arr.end(), arr[curr]/3)-arr.begin();
        while(index < arr.size() && visited[index] == true) index++;
        if(index < arr.size() && arr[index] == arr[curr]/3) 
            ans = check(arr, visited, order, index);  
        if(ans == true) return true; 
    }
    int index = lower_bound(arr.begin(), arr.end(), arr[curr]*2) - arr.begin();
    while(index < arr.size() && visited[index] == true) index++; 
    if(index < arr.size() && arr[index] == 2*arr[curr]) {
        ans = check(arr, visited, order, index);
    }
    if(ans == true) return true;
    order.pop_back();
    visited[curr] = false;
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    vector<bool> visited(n, false);
    vector<ll> req;

    for(int i=0; i < n; i++) {
        if(check(arr, visited, req, i)) break;
    }
    for(int i=0; i < n; i++) cout << req[i] << " ";
    cout << endl;
    return 0;
}