#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string str="";
    if(t<10) {
        while(n--) str.push_back('0'+t);
    } else {
        if(n == 1) {printf("-1\n"); exit(0);}
        str.push_back('0'+1);
        while(n-->1) str.push_back('0');
    }
    cout << str << endl;
}