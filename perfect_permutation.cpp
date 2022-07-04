#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n%2 == 1) {printf("-1\n"); exit(0);}
    for(int i=2; i <= n; i+=2) {
        printf("%d %d ",i, i-1);
    }
    printf("\n");
    return 0;
}