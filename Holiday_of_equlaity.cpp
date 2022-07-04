#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int max_money = 0;
    for(int i=0; i < n; i++) {cin >> arr[i]; max_money = max(max_money, arr[i]);}
    int sum = 0;
    for(int i=0; i < n; i++) sum+=max_money-arr[i];
    cout << sum << endl;
    return 0;
}