#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, cycles, sum  = 0;
    cin >> n;
    while(n--) {
        cin >> cycles;
        sum+=(cycles-1)%2;
        if(sum%2==1) printf("%d\n", 1);
        else printf("%d\n", 2);
    }   
    return 0;
}