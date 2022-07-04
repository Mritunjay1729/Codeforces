#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, k, num, sum;
    while(t--)  {
        sum = 0;
        cin >> n >> k;
        for(int i=0; i < n; i++) {cin >> num; sum+=num;}
        cout << max(0, sum-k) << endl;
    }
    return 0;
}