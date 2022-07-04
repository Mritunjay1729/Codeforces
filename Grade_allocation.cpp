#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, m, marks, sum;
    while(t--) {
        sum = 0;
        cin >> n >> m;
        for(int i=0; i < n; i++) {
            cin >> marks;
            sum+=marks;
        }
        if(sum < m) cout << sum << endl;
        else cout << m << endl;
    } 
    return 0;
}