#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int n4, n7;
    n4 = n7 = -1;
    for(int i=0; i <= n/7; i++) {
        if((n-i*7)%4 == 0) {n7 = i; n4 = (n-i*7)/4;}
    }
    if(n4 == -1 && n7 == -1) cout << - 1 << endl;
    else {
        string str="";
        while(n4--) {str.push_back('4');}
        while(n7--) {str.push_back('7');}
        cout << str << endl;
    }
}