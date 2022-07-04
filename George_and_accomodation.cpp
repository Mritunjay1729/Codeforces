#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0, x, y;
    for(int i=0; i < n; i++) {
        cin >> x >> y;
        if(y-x >= 2) count++;
    }
    cout << count << endl;
    return 0;
}