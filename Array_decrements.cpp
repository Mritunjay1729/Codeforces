#include <iostream>
#include <vector>
#define fl(n) for(int i=0; i < n; i++)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    int n, flag, zero_count, num;
    vector<int> arr1, arr2;
    while(t--) {
        cin >> n;
        arr1.clear();
        arr2.clear();
        flag = 0; 
        fl(n) {cin >> num; arr1.push_back(num);}
        fl(n) {cin >> num; arr2.push_back(num); if(num > arr1[i]) flag = 1;}
        if(flag == 1) {cout << "NO" << endl; continue;}
        int diff = -1;
        fl(n) {if(arr2[i] != 0 && arr1[i]-arr2[i] >= 0) {
            if(diff == -1) diff = arr1[i]-arr2[i];
            else if(diff != arr1[i]-arr2[i]) {flag = 1; break;}
        }}
        if(flag == 1) {cout << "NO" << endl; continue;}
        if(diff == -1) {cout << "YES" << endl; continue;}
        fl(n) {if(arr2[i] == 0 && arr1[i]-arr2[i] > diff) {flag = 1; break;}}
        if(flag == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }   
    return 0;
}