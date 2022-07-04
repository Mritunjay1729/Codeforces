#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    long long n;
    int count = 0, flag = 0;
    while(t--){
        cin >> n;
        count = 0;
        flag = 0;
        while(n > 1) {
            if(n%2 == 0) n/=2;
            else if(n%3 == 0) n = 2*(n/3);
            else if(n%5 == 0) n = 4*(n/5);
            else {
                printf("%d\n", -1);
                flag = 1;
                break;
            }
            count++;
        }
        if(!flag)  printf("%d\n", count);
    }
    return 0;
}