#include <iostream>
#include <map>
#define ll long long int
#define pr pair<int, int>
#define fl(n, i) for(int i=0; i <n; i++)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;
    cin >> n;
    int arr[200001];
    map<ll, pr> records;
    ll sum = 0, flag = 0;
    fl(n, i) {
        cin >> k;
        sum = 0;
        fl(k, j) {cin >> arr[j]; sum+=arr[j];}
        if(flag == 0) {
            fl(k, j) {
                if(records.find(sum-arr[j]) == records.end()) records[sum-arr[j]] = {i+1, j+1};
                else if(records[sum-arr[j]].first == i+1) continue;
                else {
                    cout << "YES" << endl;
                    cout << records[sum-arr[j]].first << " " << records[sum-arr[j]].second << endl;
                    cout << i+1 << " " << j+1 << endl;
                    flag = 1;
                    break;
                }
            }
        }
    }
    if(flag == 0) cout << "NO" << endl;
    return 0;
}