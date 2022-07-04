#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, val, sum = 0;
    cin >> n;
    vector<int> dist;
    while(n--) {
        cin >> val;
        dist.push_back(val);
        sum += val;
    }

    int j, k, travel_cost = 0;
    cin >> j >> k;
    if(j > k) {swap(j, k);}
    for(int i=j-1; i < k-1; i++) travel_cost += dist[i];
    printf("%d\n", min(travel_cost, sum-travel_cost));
    return 0;
}