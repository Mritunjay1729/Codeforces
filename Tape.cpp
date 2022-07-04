#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> segments(n);
    for(int i=0; i < n; i++) cin >> segments[i];
    vector<int> gap(n-1);
    for(int i=1; i < n; i++) gap[i-1] = segments[i] - segments[i-1] - 1;
    sort(gap.begin(), gap.end(), greater<int>());
    int result = segments[n-1]-segments[0]+1;
    for(int i=0; i < k-1; i++) result-=gap[i];
    cout << result << endl;
    return 0;
}