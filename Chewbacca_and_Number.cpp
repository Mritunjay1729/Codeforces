#include <iostream>
#include <vector>

using namespace std;

int main() {
    string str;
    cin >> str;
    if(str[0]-'0' > '9'-str[0] && str[0] != '9') str[0] = '0'+'9'-str[0];
    for(int i=1; i < str.length(); i++) {
        if(str[i]-'0' > '9'-str[i]) str[i] = '0'+'9'-str[i];
    }
    cout << str << endl;
    return 0;
}