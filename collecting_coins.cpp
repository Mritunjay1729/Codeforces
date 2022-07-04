#include <iostream>

using namespace std;

int main() {
    int t, a, b, c, d, k;
    cin >> t;
    while(t--) {
        cin >> a >> b>> c >> d;
        if((a+b+c+d)%3 == 0) {
            k = (a+b+c+d)/3;
            if(a-k > 0 || b-k > 0 || c-k > 0) printf("NO\n");
            else printf("YES\n");
        }else printf("NO\n");
    }
    return 0;
}