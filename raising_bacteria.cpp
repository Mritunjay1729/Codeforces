#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int number_of_bacterias = 0;
    while(n > 0) {
        number_of_bacterias += n%2;
        n/=2;
    }
    cout << number_of_bacterias << endl;
    return 0;
}