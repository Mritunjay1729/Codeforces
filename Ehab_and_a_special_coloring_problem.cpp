#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin >> n;
    vector<int> arr(n+1, -1);
    ll i=2;
    ll count=1;
    while(i <= n) {
        arr[i] = count;
        for(ll j=i*i; j <= n; j+=i) {
            arr[j] = count;
        }
        count++;
        while(i <= n && arr[i] != -1) i++;
    }

    for(ll i=2; i <= n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}