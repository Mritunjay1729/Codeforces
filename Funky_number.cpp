#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int temp, x;
    for(int i=1; i <= sqrt(n); i++) {
        temp = n;
        temp-=(i*(i+1))/2;
        if(temp == 0) continue;
        x = sqrt(2*temp);
        if((x*(x+1))/2 == temp) {cout << "YES" << endl; exit(0);}
        else if((x*(x-1))/2 == temp) {cout << "YES" << endl; exit(0);}
    }
    cout << "NO" << endl;
    return 0;
}