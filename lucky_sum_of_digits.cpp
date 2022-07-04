#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int n4, n7, count = -1;
    n4 = n7 = 0;
    while(n >= 0) {
        count++;
        if(n%4 == 0 && n>=0) {
            n4 = n/4;
            n7 = count;
        }
        n-=7;
    }
    for(int i=0; i < n4; i++) printf("4");
    for(int i=0; i < n7; i++) printf("7");
    if(n4 == 0 && n7 == 0) printf("-1");
    printf("\n");
    return 0;
}