#include <iostream>

using namespace std;

int main() {
    int n;
    char ch;
    cin >> n;
    char s, t;
    s = t = '.';
    int flag = 0;
    for(int i=1; i <=n; i++) {
        for(int j=1; j <=n; j++) {
            cin >> ch;
            if(flag == 1) {continue;}
            if(i == j || i == n-j+1) {
                if(s == '.') s = ch;
                else {
                    if(ch != s) {flag = 1;}
                }
            } else {
                if(t == '.') t = ch;
                else{
                    if(ch != t) {flag = 1;}
                }
            }
        }
    }
    if(flag == 0 && s!= t) printf("YES\n");
    else printf("NO\n");
    return 0;
}