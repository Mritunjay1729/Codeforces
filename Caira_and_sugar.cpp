#include <iostream>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    s*=100;
    int sugar = -1, d, c;
    for(int i=0; i < n; i++) {
        cin >> d >> c;
        d = d*100+c;
        if(s >= d) {
            sugar = max(sugar, (s-d)%100);
        }
    }
    printf("%d\n", sugar);
    return 0;
}