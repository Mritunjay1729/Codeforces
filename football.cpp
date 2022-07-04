#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int count = 1;
    for(int i=0; i < str.length(); i++) {
        if(count == 7)  break;
        if(str[i] == str[i-1]) count++;
        else count=1;
    }
    if(count != 7) printf("NO\n");
    else printf("YES\n");
    return 0;
}