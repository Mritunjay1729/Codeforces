#include <iostream>
#include <vector>
#define ll long long int
#include <cmath>

using namespace std;

int main() {
    int n;
    ll k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i <n; i++) cin >> arr[i];
    ll x = sqrt(2*k);
    if((x*(x+1))/2 <= k) k-=(x*(x+1))/2;
    else{
        x--;
        k-=(x*(x+1))/2;
    }
    if(k == 0) k = x;
    cout << arr[k-1] << endl;
}