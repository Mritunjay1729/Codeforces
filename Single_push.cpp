#include <iostream>
#include <vector>
#define fl(n) for(int i=0; i < n; i++)

using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    vector<int> A(100000), B(100000);
    while(t--) {
        cin >> n;
        fl(n) cin >> A[i];
        fl(n) cin >> B[i];
    
        fl(n) A[i] = B[i]-A[i];
        int i=0;
        while(i < n && A[i] == 0) i++;
        int diff;
        if(i < n) {
            diff = A[i];
            if(diff < 0) {cout << "NO" << endl; continue;}
            i++;
            while(i < n && A[i] == A[i-1]) i++;
            while(i < n && A[i] == 0) i++;
        }
        if(i == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}