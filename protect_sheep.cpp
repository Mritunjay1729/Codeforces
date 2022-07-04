#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    char A[m][n];
    for(int i=0; i < m; i++) {
        for(int j=0; j < n; j++){
            cin >> A[i][j];
        }
    }

    for(int i=0; i < m; i++) {
        for(int j=0; j < n; j++) {
            if(A[i][j] == '.') {
                A[i][j] = 'D';
            } else if(A[i][j] == 'S') {
                if((j < n-1 && A[i][j+1] == 'W') || (i < m-1 && A[i+1][j] == 'W') ||
                    (i > 0 && A[i-1][j] == 'W') || (j >0 && A[i][j-1] == 'W')) {
                        printf("No");
                        exit(0);
                    }
            }
        }
    }

    printf("YES\n");
    for(int i=0; i < m; i++) {
        for(int j=0; j < n; j++) {
            printf("%c", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}