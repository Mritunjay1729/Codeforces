#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    vector<vector<int>> days(n, vector<int>(2));
    days[n-1][0] = arr[n-1];
    days[n-1][1] = arr[n-1];
    for(int i=n-2; i >= 0; i--) {
        if(i == n-2) days[i][0] = min(arr[i], days[i+1][0]);
        else {
            days[i][0] = min(arr[i], max(days[i+1][0], days[i+1][1]));
            days[i][1] = min(arr[i], max(days[i+2][0], days[i+2][1]));
        }
    }
    cout << max(days[0][0], days[0][1]) << endl;
    return 0;
}