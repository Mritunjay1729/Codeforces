#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n%7 == 0) {cout << 2*(n/7) << " "  << 2*(n/7) << endl;}
    else {cout << 2*(n/7) + (n%7)/6 << " " << 2*(n/7)+min(2, n%7) << endl;}
    return 0;
}