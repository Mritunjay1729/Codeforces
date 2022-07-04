#include <iostream>

using namespace std;

int main() {
    char square[4][4];
    for(int i=0; i < 4; i++) {
        for(int j=0; j < 4; j++) {
            cin >> square[i][j];
        }
    }

    for(int i=0; i < 4; i++) {
        for(int j=0; j < 4; j++) {
            if(i > 0 && square[i-1][j] == square[i][j] &&
            j > 0 && square[i][j-1] == square[i][j]) {printf("YES\n"); exit(0);}
            if(i > 0 && square[i-1][j] == square[i][j] &&
            j < 3 && square[i][j+1] == square[i][j]) {printf("YES\n"); exit(0);}
            if(i < 3 && square[i+1][j] == square[i][j] &&
            j > 0 && square[i][j-1] == square[i][j]) {printf("YES\n"); exit(0);}
            if(i < 3 && square[i+1][j] == square[i][j] &&
            j < 3 && square[i][j+1] == square[i][j]) {printf("YES\n"); exit(0);}
        }
    } 
    printf("NO\n");
    return 0;
}