#include <iostream>

using namespace std;

int main() {
    int m, n, flag = 0;
    char color;
    cin >> m >> n;
    for(int i=0; i < m; i++) {
        for(int j=0; j < n; j++) {
            cin >> color;
            if(color == 'C' || color == 'M' || color == 'Y') {
                printf("#Color\n");
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }
    if(flag == 0) printf("#Black&White\n");
    return 0;
}