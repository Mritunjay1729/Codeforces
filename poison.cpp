#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    for(int i=-k; i<=k ; i++) {
        for(int j=-k; j<=k; j++) {
            arr[n/2+i][n/2+j] = -1;
        }
    }

    int count = 0;
    if(arr[0][0] == -1) {cout << count << endl; exit(0);}
    for(int i=0; i < n; i++) arr[i][0] = 1;
    for(int j=0; j < n; j++) arr[0][j] = 1;
    for(int i=1; i < n; i++) {
        for(int j=1; j < n; j++) {
            if(arr[i][j] == -1) continue;
            else if(arr[i-1][j] == -1 || arr[i][j-1] == -1) arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            else arr[i][j] = arr[i-1][j]+arr[j-1][i];
        }
    }
    cout << arr[n-1][n-1] << endl;
    return 0;
}