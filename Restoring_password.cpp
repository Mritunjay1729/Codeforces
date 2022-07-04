#include <iostream>
#include <map>

using namespace std;

int main() {
    string passwd;
    cin >> passwd;
    string temp;
    map<string, int> encrypt;
    for(int i=0;  i <= 9; i++) {
        cin >> temp;
        encrypt[temp] = i;
    }

    string res ="";
    for(int i=0; i < passwd.length(); i+=10) {
        res.push_back('0'+encrypt[passwd.substr(i, 10)]);
    }
    cout << res << endl;
    return 0;
}