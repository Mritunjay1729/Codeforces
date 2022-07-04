#include <iostream>

using namespace std;

int main() {
    int money, remo, remt;
    cin >> money;
    if(money >= 0) printf("%d\n", money);
    else {
        remo = (-money)%10;
        remt = ((-money)/10)%10;
        // cout << remo << " " << remt;
        money/=100;
        money*=10;
        if(money-remo > money-remt) printf("%d\n", money-remo);
        else printf("%d\n", money-remt);
    }
    return 0;
}