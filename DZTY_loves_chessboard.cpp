#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, n;
    char ch;
    cin >> m >> n;
    for(int i=0; i < m; i++) {
        for(int j=0; j < n; j++) {
            cin >> ch;
            if(ch == '.') {
                if((i+j)%2) printf("W");
                else printf("B");
            }else{printf("-");}
        }
        printf("\n");
    }
    return 0;
}