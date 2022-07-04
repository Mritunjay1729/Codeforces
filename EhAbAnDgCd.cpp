// Time Limit Exceeded
// #include <iostream> 

// using namespace std;

// int GCD(int a, int b) {
//     if(a > b)  return GCD(a-b, b);
//     if(b > a) return GCD(b-a, a);
//     else return a;
// }

// int LCM(int a, int b) {
//     int k = GCD(a, b);
//     if(a%k == 0) a/=k;
//     else b/=k;
//     return a*b;
// }

// int main() {
//     int t, x, flag;
//     cin >> t;
//     while(t--) {
//         cin >> x;
//         flag = 0;
//         for(int i=1; i < x; i++) {
//             for(int j= i; j <= x; j++) {
//                 if(LCM(i, j) + GCD(i, j) == x) {
//                     printf("%d %d\n", i, j);
//                     flag = 1;
//                     break;
//                 }
//             }
//             if(flag == 1) break;
//         }
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        printf("%d %d\n", 1, n-1);
    }
    return 0;
}