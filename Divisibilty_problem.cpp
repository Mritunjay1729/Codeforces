#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    int a, b, count;
    while(t--) {
        count = 0;
        cin >> a >> b;
        cout << ((a%b==0)?0:b-(a%b)) << endl;
    }
    return 0;
}