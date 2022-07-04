#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    vector<int> numbers(n);
    for(int i=0; i < n; i++) cin >> numbers[i];
    int even = 0, odd = 0;
    vector<int> cost;
    for(int i=0; i < n; i++) {
        if(numbers[i]%2 == 0) even++;
        else odd++;
        if(even == odd && even > 0) {
            if(i < n-1) cost.push_back(abs(numbers[i+1]-numbers[i]));
            odd = even = 0;
        }
    }

    // for(int i=0; i < cost.size(); i++) cout << cost[i] << " ";
    cout << endl;
    sort(cost.begin(), cost.end());
    int split = 0, sum=0, i=0;
    while(i < cost.size() && sum+cost[i] <= b) {
        sum+=cost[i++];
        split++;
    }
    // cout << sum << endl;
    printf("%d\n", split);
    return 0;
}