#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c, count = 0, temp;
    cin >> t;
    while(t--) {
        count = 0;
        cin >> a >> b >> c;
        if(a < b) swap(a, b);
        if(a < c) swap(a, c);
        if(b < c) swap(b, c);
        if(c <= a-b) {count+=c+b;}
        else if(c > a-b) {
            count+=a-b;
            c-=(a-b);
            a = b;
            {count+=c-c%2+a-c/2;}
        }
        printf("%d\n", count);
    }
    return 0;
}