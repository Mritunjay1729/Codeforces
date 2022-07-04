#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;
    a++, b++;
    ll sum = 0;
    for(int i=2; i <= a; i+=2) {
        for(int j=2; j <=b; j+=2) {
            sum+=(a-i)*(b-j);
        }
    }
    cout << sum << endl;
    return 0;
}