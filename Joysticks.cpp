#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    while(a != 0 && b != 0) {
        if(a == 1 && b == 1) {break;}
        if(a > b) {a-=2; b+=1;}
        else if(b >= a) {b-=2; a+=1;}
        count++;
    } 
    printf("%d\n", count);
    return 0;
}