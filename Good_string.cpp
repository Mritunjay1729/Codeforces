#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int i = 0, j = 1;
    string res = "";
    while(j < n) {
        if(str[i] != str[j]) {
            res.push_back(str[i]);
            res.push_back(str[j]);
            i=j+1, j++;
        } else j++;
    }
    cout << str.size()-res.size() << endl;
    if(res != "") cout << res << endl;
    return 0;
}