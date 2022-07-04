#include <iostream>

using namespace std;

int main() {
    int t, n, val, flag;
    cin >> t;
    string a, b, exor;
    while(t--) {
        cin >> n >> exor;
        a = "";
        b = "";
        flag = 0;
        for(int i=0; i < n; i++) {
            val = exor[i]-'0';
            if(val%2 == 0 && flag == 0) {
                a.push_back(val/2+'0');
                b.push_back(val/2+'0');
            }else{
                if(flag == 0) {
                    flag = 1;
                    a.push_back('1');
                    b.push_back('0');
                } else {
                    a.push_back('0');
                    b.push_back(exor[i]);
                }
            }
        }
        cout << a << endl;
        cout << b << endl;
    }
    return 0;
}