#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, num;
    int prev = 0, flag;
    while(t--){
        cin >> n;
        flag = 0;
        cin >> prev;
        for(int i=1; i < n; i++) {
            cin >> num;
            if(abs(num-prev) == 1) {;}
            else if(abs(num-prev) == n-1 && flag == 0) {flag = 1;}
            else {flag = 2;}
            prev = num;
        }
        if(flag == 2) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}