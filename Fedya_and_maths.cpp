#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string str;
    cin >> str;
    int n = str.size(), temp;
    temp = (n>1)?(str[n-2]-'0')*10+str[n-1]-'0':str[n-1]-'0';
    n = temp%4;
    int sum = 1;
    for(int i=2; i <= 4; i++) {
        sum+=pow(i, n);
    }
    printf("%d\n", sum%5);
    return 0;
}