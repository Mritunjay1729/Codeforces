#include <iostream>

using namespace std;
 
int main() {
    int b, n;
    cin >> b >> n;
    if(n%2 == 0)  {
        int i=0;
        while(b > 0) {
            i = 0;
            while(i < n/2 && b > 0) {
                cout << n/2-i << endl;
                b--;
                if(b > 0) {cout << n/2+i+1 << endl; b--;}
                i++;
            }
        }
    }else{
        int i=0;
        while(b > 0) {
            cout << (n+1)/2 << endl;
            i = 1; b--;
            while(i < (n+1)/2 && b > 0) {
                cout << (n+1)/2-i << endl; b--;
                if(b > 0) {cout << (n+1)/2+i << endl; b--;}
                i++;
            }
        }
    }
    return 0;
}