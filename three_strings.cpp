#include <iostream>

using namespace std;

int main() {
    int t, flag;
    cin >> t;
    string a, b, c;
    while(t--) {
        flag = 0;
        cin >> a >> b >> c; 
        for(int i=0; i < a.length(); i++) {
            if(c[i] != a[i] && c[i] != b[i]) {
                flag = 1;
                printf("NO\n");
                break;
            }
        }
        if(flag == 0) printf("YES\n");
    }
    return 0;
}