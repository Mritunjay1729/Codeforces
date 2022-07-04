#include <iostream>

using namespace std;

int main() {
    int length;
    cin >> length;
    if(length%2 == 1) {printf("0\n"); exit(0);}
    int sides2 = length/2;
    printf("%d\n", (sides2+1)/2 - 1);
    return 0;
}