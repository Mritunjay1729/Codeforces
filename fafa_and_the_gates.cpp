#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int x = 0, y = 0, coins = 0, flag;
    flag = (str[0]=='U')?1:0;
    for(int i=0; i < n; i++) {
        if(str[i] == 'U') y+=1;
        else if(str[i] == 'R') x+=1;
        if(flag == 1 && y > x) {coins++; flag = 0;}
        else if(flag == 0 && y < x) {coins++; flag = 1;}
    }
    printf("%d\n", coins-1);
    return 0;
}