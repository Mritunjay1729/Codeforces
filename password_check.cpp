#include <iostream>

using namespace std;

int main() {
    string passwd;
    cin >> passwd;
    string message = "Too weak";
    if(passwd.length() < 5) {cout << message << endl; exit(0);}
    int cap = 0, small = 0, digit = 0;
    for(int i=0; i < passwd.length(); i++) {
        if(passwd[i] >= 'A' && passwd[i] <= 'Z') cap = 1;
        else if(passwd[i] >= 'a' && passwd[i] <= 'z') small = 1;
        else if(passwd[i] >= '0' && passwd[i] <= '9') digit = 1;
        if(cap && small && digit) break;
    }
    if(cap && small && digit) printf("Correct\n");
    else cout << message << endl;
    return 0;
}