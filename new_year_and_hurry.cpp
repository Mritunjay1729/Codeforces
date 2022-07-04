#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int time = 240 - k, prod = 5, i;
    for(i=1; i <= n; i++) {
        if(time - prod*i < 0) {break;}
        else time -= prod*i; 
    }
    printf("%d\n", i-1);
    return 0;
}