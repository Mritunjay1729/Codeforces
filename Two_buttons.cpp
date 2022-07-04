#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int count=0;
    while(m > n) {
        if(m%2 == 0) m/=2;
        else m++;
        count++;
    }
    cout << count+(n-m) << endl;
    return 0;
}