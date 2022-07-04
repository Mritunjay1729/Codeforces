#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int q;
    cin >> q;
    int l, r, k;
    string temp;
    while(q--) {
        temp = str;
        cin >> l >> r >> k;
        int n = r-l+1;
        for(int i=0; i < n; i++) {
            temp[l+(k+i)%n-1] = str[l+i-1];
        }
        // cout << temp << endl;
        str = temp;
    }
    cout << str << endl;
    return 0;
}