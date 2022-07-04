#include <iostream>

using namespace std;

int main() {
    int t, sum;
    int a, b, c;
    cin >> t;
    while(t--) {
        sum = 0;
        cin >> a >> b >> c;
        sum = a + b + c;
        if(sum - a < a - 1 || sum - b < b - 1|| sum - c < c - 1) printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}