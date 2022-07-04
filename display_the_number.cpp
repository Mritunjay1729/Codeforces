#include <iostream>

using namespace std;

int main() {
    int t, val;
    cin >> t;
    while(t--) {
        cin >> val;
        if(val%2 == 1 && val >= 3) {printf("7"); val-=3;}
        while(val>0) {printf("1"); val-=2;}
        printf("\n");
    }
    return 0;
}