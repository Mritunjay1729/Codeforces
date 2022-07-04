#include <iostream>
#include <map>
#define ll long long int

using namespace std;

int main() {
    int n, num, prev;
    int sum = 0;
    cin >> n;
    map<int, ll> values;
    for(int i=0; i < n; i++) {
        cin >> num;
        sum+=num-prev;
        values[sum-i]+=num;
        prev = num;
    }

    ll max_beauty = 0;
    for(auto mp :values) max_beauty = max(max_beauty, mp.second);
    cout << max_beauty << endl;
    return 0;
}