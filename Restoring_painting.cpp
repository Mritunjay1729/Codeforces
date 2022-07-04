#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    ll mn, mx;
    if(a-d <= 0 && b-c <= 0) {mn=abs(a-d+b-c)+1; mx=n;}
    else if(a-d > 0 && b-c <= 0) {mn = c-b+1; mx = n-(a-d);}
    else if(b-c > 0 && a-d <= 0) {mn = d-a+1; mx = n-(b-c);}
    else {mn = 1; mx = n-(a-d)-(b-c);}
    ll result = (mx-mn+1)*n;
    cout << max((ll)0, result) << endl;
    return 0;
}