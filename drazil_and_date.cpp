#include <iostream>
#define ll long long

using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    ll s; //Number of steps it took drazil to reach varda
    cin >> s;
    if(s < (a+b)) {printf("No\n"); exit(0);}
    ll loop = s-(a+b);
    if(!(loop%2)) printf("Yes\n");
    else printf("No\n");
    return 0;
}