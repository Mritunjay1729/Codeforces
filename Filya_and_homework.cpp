#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    set<int> arr;
    int num;
    for(int i=0; i < n; i++) {cin >> num; arr.insert(num);}
    if(arr.size() > 3) cout << "NO" << endl;
    else if(arr.size() <= 2) cout << "YES" << endl;
    else{
        vector<int> nums;
        for(auto itr : arr) nums.push_back(itr);
        if(nums[1] -nums[0] == nums[2]-nums[1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}