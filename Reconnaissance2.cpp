#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int prev, num, start, min_index = 0, mn = INT32_MAX;
    cin >> prev;
    start = prev;
    for(int i=1; i < n; i++) {
        cin >> num;
        if(abs(num-prev) < mn) {
            mn = abs(num-prev);
            min_index = i-1;
        }
        prev = num;
    }
    if(abs(prev-start) < mn) {
        min_index = n-1;
    }
    printf("%d %d\n", min_index+1, (min_index+1)%n+1);
    return 0;
}