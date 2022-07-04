#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    k = (n==1 || n== 2) ? n : 1;
    cout << k << endl;
    return 0;
}