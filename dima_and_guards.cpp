#include <iostream>

using namespace std;

int main() {
    int money;
    cin >> money;
    int a, b, c, d, flag = 0;
    int price1, price2, index=-1;
    for(int i=0; i < 4; i++) {
        cin >> a >> b >> c >> d;
        if(flag == 1) continue;
        a = min(a, b);
        c = min(c, d);
        if(a+c > money) continue;
        else {
            price1 = a;
            price2 = money-a;
            index = i+1;
            flag = 1;
        }
    }
    if(index == -1) printf("-1\n");
    else printf("%d %d %d\n", index, price1, price2);
    return 0;
}