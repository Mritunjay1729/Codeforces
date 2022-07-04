#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long n, t;
    long double x = 1.000000011 , temp = x;
    cin >> n >> t;
    long double rem = 1;
    while(t > 1) {
        if(t%2 == 1) {rem*=temp; t--;}
        else{
            t/=2;
            temp*=temp;
        }
    }
    cout << fixed << setprecision(30) << n*temp*rem << endl;
    return 0;
}