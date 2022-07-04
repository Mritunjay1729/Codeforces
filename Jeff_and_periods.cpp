#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    map<int, vector<int>> arr;
    for(int i=1; i <= n; i++) {
        cin >> num;
        arr[num].push_back(i);
    }

    vector<pair<int, int>> res;
    for(auto &indices : arr) sort(indices.second.begin(), indices.second.end());
    for(auto x : arr) {
        auto alpha = x.second;
        if(alpha.size() == 1) {res.push_back({x.first, 0}); continue;}
        int i, diff = alpha[1]-alpha[0];
        for(i=1; i < alpha.size(); i++) {
            if(alpha[i] - alpha[i-1] != diff) break;
        }
        if(i == alpha.size()) res.push_back({x.first, alpha[1]-alpha[0]}); 
    }

    cout << res.size() << endl;
    if(res.size() > 0) {
        for(int i=0; i < res.size(); i++) 
            cout << res[i].first << " " << res[i].second << endl;
    }
    return 0;
}