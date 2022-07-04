#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    int h, max_height, flag = 0;
    vector<int> height;
    while(t--) {
        cin >> n;
        flag = 0;
        height.clear();
        max_height = 0;
        for(int i=0; i<n; i++) {
            cin >> h;
            max_height = max(h, max_height);
            height.push_back(h);
        }

        for(int i=0; i < n; i++) {
            if((max_height-height[i])%2 != 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}