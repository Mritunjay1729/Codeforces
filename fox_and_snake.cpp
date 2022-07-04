#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    char t[m][n], pic;
    for(int i=0; i < m; i++) {
        pic = (i%2)?'.':'#';
        for(int j=0; j < n; j++) {
            t[i][j] = pic;
        }
        if(i%4 == 1) t[i][n-1] = '#';
        else if(i%4 == 3) t[i][0] = '#';
    }

    for(int i=0; i < m; i++) {
        for(int j=0; j < n; j++) {
            printf("%c", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}