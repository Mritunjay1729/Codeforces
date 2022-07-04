#include <iostream>

using namespace std;

int main() {
    int m, n;
    char chr;
    cin >> m >> n;
    char square[m][n];
    for(int i=0; i < m; i++){
        for(int j=0; j < n; j++){ 
            cin >> chr;
            square[i][j] = chr;
        }
    }
    
    int x1, y1, x2, y2, flag = 0;
    for(int i=0; i < m; i++){ 
        for(int j=0; j < n; j++){ 
            if(square[i][j] == 'B'){
                x1 = i; y1 = j; 
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }

    flag = 0;
    for(int i=m-1; i >= 0; i--) {
        for(int j=n-1; j>=0; j--) {
            if(square[i][j] == 'B') {
                x2 = i; y2 = j; 
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }
    // printf("(%d,%d), (%d,%d)\n", x1, y1, x2, y2);
    printf("%d %d\n", (x1+x2)/2 + 1, (y1+y2)/2 + 1);
    return 0;
}