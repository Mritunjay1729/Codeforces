#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll k, l;
    cin >> k >> l;
    ll num = k;
    int count = 0; 
    while(num < l) {
        num*=k;
        count++;
    }
    if(num == l) printf("YES\n%d\n", count);
    else printf("NO\n");
    return 0;
}