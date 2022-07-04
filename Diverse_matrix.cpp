#include <iostream>
#include <vector>
#include <map>

using namespace std;

// int GCD(int a, int b) {
//     if(a == 0) return b;
//     if(b == 0) return a;
//     if(a > b) return GCD(a-b, b);
//     else if(b > a) return GCD(b-a, a);
//     else return a;
// }

// map<int, int> gcdCount(vector<vector<int>> &arr, int m, int n) {
//     map<int, int> count;
//     int gcd;
//     for(int i=0; i < m; i++) {
//         gcd = arr[i][0];
//         for(int j=1; j < n; j++) {
//             if(arr[i][j]%arr[i][0] != 0) gcd = GCD(gcd, arr[i][j]);
//         }
//         count[gcd]++;
//     }

//     for(int j=0; j < n; j++) {
//         gcd = arr[0][j];
//         for(int i=1; i <m; i++) {
//             if(arr[i][j]%gcd != 0) gcd = GCD(gcd, arr[i][j]);
//         }
//         count[gcd]++;
//     }
//     return count;
// }

int main() {
    int m, n;
    cin >> m >> n;
    if(m == n  && m == 1) {cout << 0 << endl; exit(0);}
    vector<vector<int>> arr(m, vector<int>(n));
    arr[0][0] = 2;
    int k = 3;
    int i=1, j=1;
    while(i < m && j < n) {
        if(m > n) {
            arr[i][0] = k++;
            arr[0][j] = k++;
        }else{
            arr[0][j] = k++;
            arr[i][0] = k++;
        }
        i++, j++;
    }
    while(i < m) {arr[i][0] = k++; i++;}
    while(j < n) {arr[0][j] = k++; j++;}
    for(int i=1; i < m; i++) {
        for(int j=1; j < n; j++) {
            arr[i][j] = arr[i][0]*arr[0][j];
        }
    }

    for(int i=0; i < m; i++) {
        for(int j=0; j <n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}