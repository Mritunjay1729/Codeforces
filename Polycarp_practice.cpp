#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k, problem;
    cin >> n >> k;
    int max=0;
    vector<pair<int, int>> profit;
    for(int i=1; i <= n; i++) {
        cin >> problem;
        profit.push_back({problem, i});
    }
    sort(profit.begin(), profit.end(), greater<pair<int,int>>());
    // for(int i=0; i < profit.size(); i++) cout << profit[i].first << " " << profit[i].second << endl;
    vector<int> result;
    result.push_back(0);
    int max_profit=0;
    int i;
    for(i=0; i < k; i++) {
        max_profit+=profit[i].first;
        result.push_back(profit[i].second);
    } 
    sort(result.begin(), result.end());
    cout << max_profit << endl;
    // for(int i=0; i < result.size(); i++) cout << result[i] << " ";
    for(int i=1; i < result.size()-1; i++) cout << result[i]-result[i-1] << " ";
    cout << n-result[result.size()-2];
    cout << endl;
    return 0;
}