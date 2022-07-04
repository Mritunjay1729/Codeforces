#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> height(n);
    for(int i=0; i <n; i++) cin >> height[i];
    int ans = 0;
    ans+=height[0];
    int curr_height = height[0];
    for(int i=1; i < n; i++) {
        if(height[i] >= curr_height) ans+=(1+height[i]-curr_height);
        else ans+=(1+curr_height-height[i]);
        curr_height=height[i];
    }
    cout << ans+n << endl;
    return 0;
}