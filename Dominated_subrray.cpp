#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, num, result;
    cin >> t;
    int n;
    vector<int> path;
    map<int, int> nums;
    while(t--) {
        nums.clear();
        path.clear();
        cin >> n;
        result = n+1;
        for(int i=0; i < n; i++) {
            cin >> num;
            if(nums.find(num) == nums.end()) {
                nums[num] = i;
            } else {
                path.push_back(i-nums[num]+1);
                nums[num] = i;
            }
        }
        for(int i=0; i < path.size(); i++) result = min(path[i], result);
        if(result == n+1) cout << "-1" << endl;
        else cout << result << endl;
    }
    return 0;
}