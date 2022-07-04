#include <iostream>

using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    int price , prev;
    cin >> price;
    prev = price;
    n--;
    int raspberry = 0;
    while(n--) {
        cin >> price;
        raspberry = max(raspberry, prev-price);
        prev = price;
    }
    printf("%d\n", raspberry-c>0?raspberry-c:0);
    return 0;
}