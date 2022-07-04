#include <iostream>

using namespace std;

int main() {
    int sum = 0, num;
    for(int i=0; i < 5; i++) {
        cin >> num;
        if(num < 0) {printf("%d\n", -1); exit(0);}
        sum+=num;
    }
    if(sum%5 == 0 && sum != 0) printf("%d\n", sum/5);
    else printf("-1\n");
    return 0;
}