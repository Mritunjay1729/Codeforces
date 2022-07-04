#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 1, sum  = 0, val = 19, temp;
    while(count < n) {
        val+=9;
        sum = 0;
        temp = val;
        while(temp > 0) {
            sum+=temp%10;
            temp/=10;
        }
        if(sum%10 == 0) count++;
    }
    printf("%d\n", val);
    return 0;
}