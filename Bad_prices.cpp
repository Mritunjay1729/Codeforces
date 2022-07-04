#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    int n, price, bad_days;
    vector<int> prices;
    while(t--) {
        cin >> n;
        prices.clear();
        bad_days= 0;
        for(int i=0; i < n; i++) {cin >> price; prices.push_back(price);}
        int min_price = prices[n-1];
        for(int i=n-2; i>=0; i--) {
            if(prices[i] < min_price) {
                min_price = prices[i];
            } else if(prices[i] > min_price) {
                bad_days++;
            }
        }
        cout << bad_days << endl;
    }
    return 0;
}