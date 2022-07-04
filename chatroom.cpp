#include <iostream>

using namespace std;

int main() {
    string str = "hello";
    string typed;
    cin >> typed;
    int i=0, j = 0;
    while(i < typed.length() && j < 5) {
        if(typed[i++] == str[j]) j++;
    }
    if(j == 5) printf("YES\n");
    else printf("NO\n");
    return 0;
}