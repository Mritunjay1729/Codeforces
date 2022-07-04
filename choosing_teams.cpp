#include <iostream>
using namespace std;

int main() {
    int n, k, left;
    cin >> n >> k;
    int count = 0;
    while(n--) {
        cin >> left;
        if(5-left >= k) count++;
    }
    printf("%d\n", count/3);
    return 0;
}