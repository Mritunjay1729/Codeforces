#include <iostream>
#include <vector>
#include <algorithm>
#define fl(n) for(int i=0; i < n; i++)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> current(n), after_week(n);
    vector<pair<int, int>> diff(n);
    fl(n) cin >> current[i];
    fl(n) {cin >> after_week[i]; diff[i] = {current[i]-after_week[i], i};}
    sort(diff.begin(), diff.end());
    int min_amt = 0;
    for(int i=0; i < k; i++) min_amt+=current[diff[i].second];
    for(int i=k; i < n; i++) {
        if(diff[i].first <= 0) min_amt+=current[diff[i].second];
        else min_amt+=after_week[diff[i].second];
    }
    printf("%d\n", min_amt);
    return 0;
}