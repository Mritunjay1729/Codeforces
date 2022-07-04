#include <iostream>

using namespace std;

int main() {
    int t, m, n, count;
    cin >> t;
    while(t--) {
        cin >> m >> n;
        count  =0;
        while(m > 0 && n > 0) {
            if(m > n) {
                count += m/n;
                m%=n;
            }
            else{
                count += n/m;
                n%=m;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}