#include <iostream>

using namespace std;

int main() {
    string required = "CODEFORCES";
    string given;
    cin >> given;
    int i=0, j = 0, count = 0;
    while(i < required.length() && j < given.length()) {
        if(required[i] != given[j]) break;
        count++;
        i++, j++;
    }
    i = required.length()-1, j = given.length()-1;
    int scount = 0;
    while(j > 0) {
        if(required[i] != given[j]) break;
        scount++;
        i--, j--;
    }
    if(count+scount>=required.length()) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}