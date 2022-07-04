#include <iostream>
#include <vector>
#define fl(n) for(int i=0; i < n; i++)
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        if(a-b == 0) printf("%d\n", 0);
        else if(a < b) {
            if((b-a)%2 == 1) printf("%d\n", 1);
            else printf("%d\n", 2);
        } else {
            if((a-b)%2 == 0) printf("%d\n", 1);
            else printf("%d\n", 2); 
        }
    }
    return 0;
}