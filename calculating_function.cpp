#include <iostream>

using namespace std;

int main() {
    long long num, ans;
    cin >> num;
    ans = num/2;
    if(num % 2) ans-= num;
    cout << ans << endl;
    return 0;
}