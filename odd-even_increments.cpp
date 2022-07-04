#include <iostream>

using namespace std;

void odd_even_increments(int n) {
    int odd_flag, even_flag, num;
    odd_flag = even_flag = 0;
    for(int i=0; i < n; i++) {
        cin >> num;
        if(i  == 0) {
            even_flag = num%2;
        } else if(i % 2 == 0) {
            if(num %2 != even_flag) {
                cout << "NO\n";
                break;
            }
        }
        if (i == 1) {
            odd_flag = num % 2;
        } else if (i % 2 == 1) {
            if(num % 2 != odd_flag) {
                cout << "NO\n";
                break;
            }
        }
        if(i == n-1) printf("YES\n");
    }
}
 
int main() {
    int t, n;
    cin >> t;
    for(int i=0; i < t; i++) {
        cin >> n;
        odd_even_increments(n);
    }
    return 0;
}