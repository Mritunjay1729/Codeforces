#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> required(n), george(m);
    int complexity;
    for(int i=0; i < n; i++) cin >> required[i];
    for(int i=0; i < m; i++) {cin >> george[i];}
    int count = 0;
    int i;
    for(i=0; i < n; i++) {
        if(binary_search(george.begin(), george.end(), required[i])) continue;
        else {
            int index = lower_bound(george.begin(), george.end(), required[i]) -george.begin();
            if(index == m) break;
            else george[index] = required[i]; 
        }
    }
    cout << n-i << endl;
    return 0;
}