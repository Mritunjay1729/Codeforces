#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, q, p;
    cin >> n;
    vector<pair<int, int>> metrics;
    while(n--) {
        cin >> p >> q;
        metrics.push_back({p, q});
    }
    sort(metrics.begin(), metrics.end());
    for(int i=1; i < metrics.size(); i++) {
        if(metrics[i].second < metrics[i-1].second) {printf("Happy Alex\n"); exit(0);}
    }
    printf("Poor Alex\n");
    return 0;
}