#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int grp1 = 0, grp2 = 0;
    for(int i=0; i < n; i++) {cin >> arr[i]; grp2+=arr[i];}
    int l, r;
    cin >> l >> r;
    for(int i=0; i < n; i++) {
        if(l <= grp1 && grp1 <= r && l <= grp2 && grp2 <= r) {cout << i+1 << endl; exit(0);}
        grp1+=arr[i];
        grp2-=arr[i];
    }
    cout << 0 << endl;
    return 0;
}