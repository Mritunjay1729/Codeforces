#include <iostream>

using namespace std;

int main() {
    int n, count = 0, carry = 1;
    cin >> n;
    string str;
    cin >> str;
    for(int i=0; i < n; i++) {
        if(carry + str[i]-'0' == 2) {
            carry = 1;
            if(str[i] == '1') count++;
            str[i] = '0';
        } else if(carry + str[i] - '0' == 1) {
            carry = 0;
            if(str[i] == '0') count++;
            str[i] = '1';
            break;
        }
    }
    cout << count << endl;
    return 0;
}