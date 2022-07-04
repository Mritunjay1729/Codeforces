#include <iostream>

using namespace std;

int GCD(int a, int b) {
    if(a > b)
        return GCD(a-b, b);
    else if(b > a)
        return GCD(b-a, a);
    else
        return a;
}

int main() {
    int a, b, h, gcd;
    cin >> a >> b >> h;
    int flag = 0;
    while(1) {
        if(flag == 0) {
            gcd = GCD(a, h);
            // cout << gcd << " " << h << endl;
            if(gcd >= h) {
                if(gcd == h) printf("0\n");
                else printf("1\n");
                break;
            }
            h-=gcd;
            flag = 1;
        } else {
            gcd = GCD(b, h);
            // cout << gcd << " " << h << endl;
            if(gcd >= h) {
                if(gcd == h) printf("1\n");
                else printf("0\n");
                break;
            }
            h-=gcd;
            flag = 0;
        }
    }
    return 0;
}