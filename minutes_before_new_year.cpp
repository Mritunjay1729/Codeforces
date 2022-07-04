#include <iostream>

using namespace std;

int main() {
    int t, h, m;
    cin >> t;
    while(t--) {
        cin >> h >> m;
        printf("%d\n", 60*(23-h)+(59-m)+1);
    }
    return 0;
}