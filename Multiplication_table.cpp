#include <iostream>
#include <cmath>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    ll matrix[n+1][n+1];
    for(int i=1; i <= n; i++) {
        for(int j=1; j <= n; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i=2; i <= n-1; i++) {
        matrix[i][i] = (matrix[i-1][i]*matrix[i][i+1])/(matrix[i-1][i+1]);
    }
    ll ones = matrix[1][2]/sqrt(matrix[2][2]);
    matrix[1][1] = ones*ones;
    ll last = matrix[n-1][n]/sqrt(matrix[n-1][n-1]);
    matrix[n][n] = last*last;

    for(int i=1; i <=n; i++) cout << (long long int)sqrt(matrix[i][i]) << " ";
    cout << endl;
    return 0;

}