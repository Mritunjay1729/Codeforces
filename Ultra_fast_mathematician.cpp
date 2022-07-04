#include <iostream>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    string res = "";
    for(int i=0; i < str1.length(); i++) {
        res.push_back('0'+((str1[i]-'0')^(str2[i]-'0')));
    }
    cout << res << endl;
    return 0;
}