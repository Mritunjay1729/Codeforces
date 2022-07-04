#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    int total, price;
    while(t--) {
        total = 0;
        cin >> n;
        for(int i=0; i < n; i++) {
            cin >> price;
            total += price;
        }
        printf("%d\n", total/n + ((total%n)?1:0));
    }
    return 0;
}