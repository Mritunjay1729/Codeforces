#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1, j=1;
    int t = n-1;
    while(t--) {
        i+=j;
        i%=n;
        if(i == 0) i = n;
        cout <<i << " ";
        j++;
    }
    cout << endl;
    return 0;
}