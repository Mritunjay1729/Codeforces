#include <iostream>

using namespace std;

int main() {
    int n, sum, count;
    cin >> n;
    sum = count = 0;
    int i=1;
    while(sum <= n) {
        count += i;
        sum += count;
        i++;
    }
    printf("%d\n", i-2);
    return 0;
}