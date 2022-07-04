#include <iostream>
#include <vector>
#define uint unsigned int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    uint n, k;
    cin >> n >> k;
    vector<int> height(n);
    for(uint i=0; i < n; i++) {
        cin >> height[i];
    }

    int sum = 0, min_height = INT32_MAX, min_index = 0;
    for(uint i=0; i < k; i++) sum+=height[i];
    min_height = sum;
    for(uint i=k; i<n; i++) {
        sum-=height[i-k];
        sum+=height[i];
        if(sum < min_height) {
            min_height = sum;
            min_index = i-k+1;
        }
    }
    printf("%u\n", min_index+1);
    return 0;
}