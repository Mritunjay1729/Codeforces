#include <iostream>

using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    int d = k%10;
    for(int i=1; i < 10; i++) {
        if((d*i)%10 == r || (d*i)%10 == 0) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}