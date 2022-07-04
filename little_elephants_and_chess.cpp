#include <iostream>

using namespace std;

int main() {
    int flag = 0;
    char ch, prev='x';
    for(int i=0; i < 8; i++) {
        if(flag != 2) flag = 0;
        for(int j=0; j < 8; j++) {
            cin >> ch;
            if(flag == 2) continue;
            if(flag == 0 && ch == prev) {
                flag = 1;
            } else if(ch == prev) {
                flag = 2;
            }
            prev = ch;
        }
    }
    if(flag == 2) printf("NO\n");
    else printf("YES\n");
}