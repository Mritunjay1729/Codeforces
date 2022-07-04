#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for(int i=0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }

    ll sum2=0, i;
    for(i=0; sum2<(sum+1)/2 && i < n; i++) {
        sum2+=arr[i];
    }
    cout << i << endl;
    return 0;
}