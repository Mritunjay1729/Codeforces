#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d, rem, e;
    cin >> a >> b;
    c = d = e = 0;

    int temp = a, p = 1;
    while(temp > 0) {
        rem = temp%10;
        if(rem!=0) {c = rem*p+c; p*=10;}
        temp/=10;
    }

    temp = b, p = 1;
    while(temp > 0) {
        rem = temp%10;
        if(rem!=0) {d = rem*p+d; p*=10;}
        temp/=10;
    }

    int sum = a+b;
    temp = sum, p = 1;
        while(temp > 0) {
        rem = temp%10;
        if(rem!=0) {e = rem*p+e; p*=10;}
        temp/=10;
    }
    // cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    if(c+d == e) printf("YES\n");
    else printf("NO\n");
    return 0;
}