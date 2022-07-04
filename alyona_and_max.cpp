#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i=0; i < n; i++) cin >> numbers[i];
    sort(numbers.begin(), numbers.end());
    int start= 1;
    for(int i=0; i <n; i++) {
        if(start == numbers[i]) start++;
        else if(numbers[i] < start) continue;
        else {numbers[i] = start; start++;}
    }

    start = 1;
    for(int i=0; i < n; i++) {
        if(numbers[i] == start) start++;
        else if(numbers[i] < start)  continue;
        else break;
    }
    printf("%d\n", start);
    return 0;
}