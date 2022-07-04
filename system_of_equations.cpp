#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int count = 0;
    int  val = max(sqrt(m), sqrt(n));
    for(int i=0; i <= val; i++) {
        for(int j=0; j <= val; j++) {
            if(i*i + j == m && j*j + i == n) 
                count++;
        }
    }
    printf("%d\n", count);
    return 0;
}