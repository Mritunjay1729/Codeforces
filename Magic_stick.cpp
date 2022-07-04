#include <iostream>
#define ll long long int

using namespace std;

int main() {
    int n;
    ll x, y;
    cin >> n;
    for(int i=0; i < n; i++) {
        cin >> x >> y;
        if(x == y) cout << "YES" << endl;
        else if(x < y) {
            if(x%2 == 1 && x > 1) x--;
            while(x < y) {
                if(x == 1) break;
                if(x%2 == 1 && x > 1) x--;
                if(x == y) break;
                if(x%2==0 && y!=3 && (x+1 == (3*x)/2 || x == (3*x)/2)) break;
                else x = (3*x)/2;
                if(x == y) break;
            }
            if(x < y) cout << "NO" << endl;
            else cout << "YES" << endl; 
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}