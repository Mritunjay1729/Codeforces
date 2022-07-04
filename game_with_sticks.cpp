#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int ans = min(m, n);
    if(ans%2 == 1) printf("Akshat\n");
    else printf("Malvika\n");
    return 0;
}