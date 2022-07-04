#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int l, h, flag = 0;
    while(t--){
        cin >> l >> h;
        printf("%d %d\n", l, l*2);
    }
    return 0;
}