#include <iostream>

using namespace std;

int main() {
    int m, n; //m= candles, n = no of leftovers join to make single candles
    cin >> m >> n;
    int rem = 0, sum = 0;
    while(m > 0) {
        sum += m;
        rem = rem+m%n;
        m = m/n;
        if(rem >= n) {m+=rem/n; rem%=n;}
    }
    printf("%d\n", sum);
    return 0;
}