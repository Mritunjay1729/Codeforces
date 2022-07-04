#include <iostream>

using namespace std;

int main() {
    int n, k, candies = 0, num, day = 0;
    cin >> n >> k;
    while(n--) {
        if(k <= 0) break;
        cin >> num;
        candies += num;
        k-=(candies >=8)?8:candies;
        candies = (candies>8)?candies-8:0;
        // cout << candies << " " << k << " " << day << endl;
        day++;
    }
    if(k <= 0) printf("%d\n", day);
    else printf("%d\n", -1);
    return 0;
}