#include <iostream>
#define ll long long

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int f, t;
    int max_joy = INT32_MIN, joy;
    while(n--) {
        cin >> f >> t;
        if(t <= k) joy = f;
        else joy = f+k-t;
        max_joy = max(joy, max_joy); 
    }
    printf("%d\n", max_joy);
    return 0;
}