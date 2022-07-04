#include <iostream>
#define ll long long int

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if(x < y-1 || y == 0 || (y == 1 && x!=0)) cout << "NO" << endl;
    else if(x == y-1) cout << "YES" << endl;
    else {
        if((x-y+1)%2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}