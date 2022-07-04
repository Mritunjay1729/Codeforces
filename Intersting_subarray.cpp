#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    int n, prev, num, flag;
    while(t--) {
        cin >> n;
        cin >> prev;
        flag = 0;
        for(int i=1; i < n; i++) {
            cin >> num;
            if(flag == 1) continue;
            if(abs(num-prev) >= 2) {
                printf("YES\n%d %d\n", i, i+1);
                flag = 1;
            }
            prev = num;
        }
        if(flag == 0) printf("NO\n");
    }
    return 0;
}