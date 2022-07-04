#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, num;
    cin >> n;
    int initial, count = 0, result=0;
    cin >> initial;
    for(int i=1; i < n; i++) {
        cin >> num;
        if(num <= 2*initial) {
            count++;
            result = max(count, result);
        } else {
            count = 0;
        }
        initial = num;
    }
    cout << result+1 << endl;
    return 0;
}