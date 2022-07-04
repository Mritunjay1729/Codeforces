#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, k1, k2, flag = 0, card;
    while(t--) {
        flag = 0;
        cin >> n >> k1 >> k2;
        for(int i=0; i < k1; i++) {
            cin >> card;
            if(flag == 1) continue;
            if(card == n) {printf("YES\n"); flag = 1;}
        }
        if(flag == 0) printf("NO\n");
        for(int i=0; i < k2; i++) {
            cin >> card;
        }
    }
    return 0;
}