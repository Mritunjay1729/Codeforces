#include <iostream>

using namespace std;

int main() {
    int t, k, flag;
    cin >> t;
    int d; //Number of digits
    string str;
    while(t--) {
        cin >> d;
        cin >> str;
        char odd1='x', odd2='x';
        flag = 0;
        for(int i=0; i < str.length(); i++) {
            if(flag == 2) break;
            k = str[i] - '0';
            if(k%2 == 1 && flag == 0)  {odd1 = str[i]; flag++;}
            else if(k%2 == 1 && flag == 1) {odd2 = str[i]; flag++;}
        }
        if(odd1 == 'x' || odd2 == 'x') printf("-1\n");
        else printf("%c%c\n", odd1, odd2);
    }
    return 0;
}