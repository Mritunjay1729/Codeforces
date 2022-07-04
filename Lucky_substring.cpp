#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int f, s;
    f = s = 0;
    for(int i=0; i < str.length(); i++) {
        if(str[i] == '4') f++;
        else if(str[i] == '7') s++;
    }
    if(f == 0 && s == 0) cout << -1 << endl;
    else if(f >= s) cout << 4 << endl;
    else cout << 7 << endl;
    return 0;
}