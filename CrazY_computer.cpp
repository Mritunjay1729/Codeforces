#include <iostream>
#include <vector>
#define fl(n) for(int i=0; i < n; i++)
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, c;
    cin >> n >> c;
    ll count = 0, num, prev = 0;
    fl(n) {
        cin >> num;
        if(num-prev>c) count = 0;
        count++;
        prev = num;
    }
    cout << count;
    return 0;
}