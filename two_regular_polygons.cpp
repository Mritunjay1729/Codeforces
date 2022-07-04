#include <iostream>

using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        if(n%m == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}