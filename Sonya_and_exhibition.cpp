#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string flowers ="";
    for(int i=0; i < n; i++) flowers.push_back('0'+i%2);
    int x, y;
    while(k--) {cin >> x >> y;}
    cout << flowers << endl;
    return 0;
}