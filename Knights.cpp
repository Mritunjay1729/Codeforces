#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            ((i+j)%2)?cout << 'B':cout << 'W';
        }
        cout << endl;
    }
    return 0;
}