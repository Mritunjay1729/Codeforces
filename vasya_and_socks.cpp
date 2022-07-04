#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int no_of_days = n;
    while(n >= m) {
        no_of_days += n/m;
        n = n/m + n%m;
    }
    cout << no_of_days << endl;
    return 0;
}