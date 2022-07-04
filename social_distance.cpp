#include <iostream>

using namespace std;

int main() {
    long t, m, n, sum, num;
    cin >> t;
    while(t--) {
        sum = 0;
        cin >> n >> m;
        while(n--) {
            cin >> num;
            if(2*sum <= m) sum += num;
        }
        2*sum <= m? printf("YES\n"): printf("NO\n");
    }
    return 0;
}