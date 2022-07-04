#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n%3 == 0) {n/=3; cout << n << " " << n+1 << " " << n-1 << endl;}
        else if(n%3 == 1) {
            n/=3; 
            if(n-2!=0) cout << n+1 << " " << n+2 << " " << n-2 << endl;
            else cout << n << " " << n+2 << " " <<  n-1 << endl;
        }
        else {n/=3; cout << n+1 << " " << n+2 << " " << n-1 << endl;} 
    }
    return 0;
}