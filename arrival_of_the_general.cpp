#include <iostream>

using namespace std;

int main() {
    unsigned int n, num;
    cin >> n;
    unsigned int mn, mx_index, mx, mn_index;
    mn = INT32_MAX;
    mx = 0;
    for(int i=1; i <= n; i++) {
        cin >> num;
        if(num > mx) {
            mx = num;
            mx_index = i;
        }
        if(num <= mn) {
            mn = num;
            mn_index = i;
        }
    }
    // cout << mx_index << " " << mn_index << endl;
    int step = (n-mn_index)+(mx_index-1);
    if(mx_index < mn_index) {
        printf("%d\n", step);
    }else{
        printf("%d\n", step-1);
    }
    return 0;
}