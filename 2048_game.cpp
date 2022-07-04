#include <iostream>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, num, flag ;
    map<int, int> arr;
    while(t--) {
        cin >> n;
        arr.clear();
        for(int i=0; i < n; i++) {cin >> num; arr[num]++;}
        flag = 0;
        for(auto num : arr) {
            if(num.first == 2048 && num.second > 0) {flag = 1; break;} 
            arr[num.first*2] += num.second/2;
        } 
        if(flag == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}