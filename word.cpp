#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    int lower, upper;
    lower = upper = 0;
    for(auto chr : str) {
        if(chr >= 65 && chr <= 90){
            upper++;
        } else {
            lower++;
        }
    }

    if(lower >= upper){   
        for(int i=0; i < str.length(); i++) {
            if(str[i] > 90) cout << str[i];
            else cout << (char)(str[i] + 32);
        }
    } else {
        for(int i=0; i < str.length(); i++) {
            if(str[i] <= 90) cout << str[i];
            else cout << char(str[i] - 32);
        }
    }
    return 0;
}