#include <iostream>
#define ll long long int

using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    ll g, b;
    ll days;
    while(t--) {
        days = 0;
        cin  >> n >> g >> b;
        if(g >= b) {
            days = n;
        }else{
            ll x = n/(2*g), left =(b-g)*x;
            days+=(g+b)*x;
            if(n%(2*g) == 0) {
                days-=b;
                if(days < n) days = n;
            }else{
                n%=(2*g);
                if(g+(b-g)*x>n) days+=(n+1)/2;
                else days+=(n-(b-g)*x);
                if(days < x*(2*g)+n) days = x*(2*g)+n;
            }
        }
        cout << days << endl;
    }
    return 0;
}