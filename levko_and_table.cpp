#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int t[n][n];
    int val = k/n;
    int rem = k < n?k%n:val+k%n;
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            if(j == i) t[i][j] = rem;
            else t[i][j] = val;
        }
    }
    
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}