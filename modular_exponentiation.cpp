#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b; 
    cin >> a >> b;
    if(a > b) printf("%d\n", b);
    else {
        int m = 1, k = 0;
        while(m < b) {
            m*=2;
            k++;
        }
        // printf("factor : %d a: %d\n", k, a);
        if(k == a && b%m == 0) printf("%d\n", 0);
        else if(a > k) printf("%d\n", b);
        else {
            int p = pow(2, a);
            printf("%d\n", b%p);
        }
    }
    return 0;
}