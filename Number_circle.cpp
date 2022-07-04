#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int 

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<ll> numbers(n);
    for(int i=0; i < n; i++) cin >> numbers[i];
    sort(numbers.begin(), numbers.end());

    if(numbers[n-3]+numbers[n-2]<=numbers[n-1]) {
        printf("NO\n");
        exit(0);
    }
    cout << "YES\n";
    cout << numbers[n-1] << " ";
    for(int i=n-3; i >= 0; i--) cout << numbers[i] << " ";
    cout << numbers[n-2] << endl;
    return 0;
}