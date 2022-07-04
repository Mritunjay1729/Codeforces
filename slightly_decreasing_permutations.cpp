#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int i;
    for(i=1; i <= n-k-1; i++) cout << i << " ";
    for(int j=n; j>=i; j--) cout << j << " ";
    cout << endl;
    return 0;
}