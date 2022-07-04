#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    int meat, price, total_meat, min_price, total_price=0;
    cin >> total_meat >> min_price;
    for(int i=1; i < n; i++) {
        cin >> meat >> price;
        if(price < min_price) {
            total_price += total_meat*min_price;
            min_price = price;
            total_meat = meat;
            // cout << total_price << endl;
        } else {
            total_meat+=meat;
        }
    }
    total_price += min_price*total_meat;
    cout << total_price << endl;
    return 0;
}