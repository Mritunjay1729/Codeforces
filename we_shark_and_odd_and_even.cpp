#include <iostream>

using namespace std;

int main() {
    long long n, num, sum = 0, mn = INT32_MAX;
    cin >> n;
    while(n--) {
        cin >> num;
        sum += num;
        if(num%2 == 1) mn = min(mn, num);
    }
    if(sum%2) sum-=mn;
    cout << sum;
    return 0;
}