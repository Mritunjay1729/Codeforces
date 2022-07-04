#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll num;
    cin >> num;
    ll temp;
    int count = 0;
    while(1) {
        num++;
        temp = num;
        while(temp != 0) {
            if(temp%10 == 8 || temp%10 == -8) {cout << count+1 << endl; exit(0);}
            temp/=10;
        }
        count++;
    }
    return 0;
}