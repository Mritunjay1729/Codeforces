#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int temp = 3*n-k;
    if(k/n>=2) printf("%d\n",(temp>0?temp:0));
    else printf("0\n");
    return 0;
}