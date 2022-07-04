#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int temp = n, count  = 0;
    while(temp > 0) {temp/=10; count++;}
    int index = 0;
    index = pow(2, count)-2;
    int p = 0, rem;
    while(n > 0) {
        rem = (n%10);
        if(rem == 7) index+=1<<p;
        p++; 
        n/=10;
    }
    printf("%d\n", index+1);
    return 0;
}