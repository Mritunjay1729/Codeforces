#include <iostream>
#define endl "\n"
#include <cmath>
using namespace std;
#define long int long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long test;
    cin >> test;
    while(test--){
        long num;
        cin >> num;
        if(num%3 == 2)
            cout << num/3 << " " << (int)ceil((double)num/3) << endl;
        else
            cout << (int)ceil((double)num/3) << " " << num/3 << endl;
    }
    return 0;
}