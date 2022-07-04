#include <iostream>

using namespace std;

int main() {
    int m,n, count;
    char chr;
    cin >> m >> n;
    char pattern[m][n];
    int start_row, end_row, start_col, end_col;
    for(int i=0; i < m; i++) {
        for(int j=0; j < n; j++) {
            cin >> chr;
            pattern[i][j] = chr;
        }
    }

    int flag = 0;
    for(int i=0; i < m; i++) {
        for(int j=0; j < n; j++) {
            if(pattern[i][j] == '*') {
                start_row = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }

    flag = 0;
    for(int j=0; j < n; j++) {
        for(int i=0; i < m; i++) {
            if(pattern[i][j] == '*') {
                start_col = j;
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }

    flag = 0;
    for(int i=m-1; i >= 0; i--) {
        for(int j=0; j < n; j++) {
            if(pattern[i][j] == '*') {
                end_row = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }

    flag = 0;
    for(int j=n-1; j >= 0; j--) {
        for(int i=0; i < m; i++) {
            if(pattern[i][j] == '*') {
                end_col = j;
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }
    
    for(int i=start_row; i <= end_row; i++) {
        for(int j=start_col; j <= end_col; j++) {
            printf("%c", pattern[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}