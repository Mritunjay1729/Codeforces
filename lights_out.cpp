#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, num;
    int mat[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

    int row[] = {-1, 0, 1};
    int col[] = {-1, 0, 1};

    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            cin >> num;
            mat[i][j] = (mat[i][j] + num)%2;
            if(i > 0) mat[i-1][j] = (mat[i-1][j] + num)%2;
            if(j > 0) mat[i][j-1] = (mat[i][j-1] + num)%2;
            if(i < 2) mat[i+1][j] = (mat[i+1][j] + num)%2;
            if(j < 2) mat[i][j+1] = (mat[i][j+1] + num)%2;
        }
    }

    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            printf("%d", mat[i][j]);
        }
        cout << endl;
    }
    return 0;
}