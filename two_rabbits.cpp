#include <iostream>

using namespace std;

int main() {
    int t, x, y, a, b;
    cin >> t;
    while(t--) {
        cin >> x >> y >> a >> b;
        if((y-x)%(a+b)==0) printf("%d\n", (y-x)/(a+b));
        else printf("%d\n", -1);
    }
    return 0;
}