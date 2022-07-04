#include <iostream>

using namespace std;

int main() {
    int t, price;
    cin >> t;
    int max=0, s_max, index;
    for(int i=0; i < t; i++) {
        cin >> price;
        if(price > max) {s_max=max; max=price; index = i+1;}
        else if(price > s_max) {s_max = price;}
    }
    printf("%d %d\n", index, s_max);
    return 0;
}