#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int i=0, n = str.length();
    int one, zero;
    string res = "";
    zero = one = 0;
    while(i < str.length() && str[i] != '2') {
        if(str[i] == '0') zero++;
        else if(str[i] == '1') one++;
        i++;
    }
    while(zero--) res.push_back('0');
    while(one--) res.push_back('1');
    int j = i;
    while(j < n) {
        if(str[j] == '1') res.push_back('1');
        j++;
    }
    while(i < n) {
        if(str[i] != '1') res.push_back((str[i]));
        i++;
    }
    cout << res << endl;
    return 0;
}