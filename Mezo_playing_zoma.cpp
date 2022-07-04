#include <iostream>

using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;
    int l, r;
    l = r  = 0;
    for(int i=0; i < str.length(); i++) {
        if(str[i] == 'L') l++;
        else r++;
    }
    cout << l+r+1;
    return 0;
}