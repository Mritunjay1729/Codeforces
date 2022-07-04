#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans = 2;
    while(n--) {
        ans*=2;
    } 
    cout << ans-2 << endl;
    return 0;
}