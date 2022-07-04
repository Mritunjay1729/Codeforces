#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> prices(n);
    for(int i=0; i < n; i++) cin >> prices[i];
    int max_price = m;
    for(int i=0; i < n-1; i++) {
        for(int j=i+1; j < n; j++) {
            max_price = max(max_price, (m/prices[i])*prices[j]+m%prices[i]);
        }
    }
    cout << max_price << endl;
    return 0;
}