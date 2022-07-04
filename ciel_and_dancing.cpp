#include <iostream>

using namespace std;

int main() {
    int b, g;
    cin >> b >> g;
    //min(b, g)*2 - 1 + max(b, g)-min(b, g);
    int ans = min(b, g)-1 + max(b, g);
    cout << ans << endl;
    for(int i=1; i <= min(b, g); i++) {
        printf("%d %d\n", i, i);
        if(b < g && i+1 <= g) printf("%d %d\n", i, i+1);
        else if(i+1 <= b) printf("%d %d\n", i+1, i); 
    }
    if(b-g > 1) {
        for(int i=min(b, g)+2; i<=b; i++) printf("%d %d\n", i, 1);
    } else if(g -b > 1) {
        for(int i= min(b, g)+2; i<=g; i++) printf("%d %d\n", 1, i);
    }
    return 0;
}