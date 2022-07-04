#include <iostream>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    queue<int> numbers;
    int n, number;
    vector<int> arr, num;
    while(t--) {
        cin >> n;
        arr.clear(); num.clear();
        for(int i=0; i < n; i++) {cin >> number; arr.push_back(number);}
        for(int i=1; i <= n; i++) {num.push_back(i);}
        for(int i=0; i < n-1; i++) {
            if(arr[i] == num[i]) swap(num[i], num[i+1]);
        }
        for(int i=n-1; i >= 1; i--) {
            if(arr[i] == num[i]) swap(num[i], num[i-1]);
        }

        int flag = 0;
        for(int i=0; i < n; i++) {if(num[i] == arr[i]) {flag = 1; break;}}
        if(flag == 1) cout << "-1" << endl;
        else {
            for(int i=0; i < n; i++) cout << num[i] << " ";
            cout << endl;
        }
    }
    return 0;
}