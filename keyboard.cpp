#include <iostream>
#include <map>

using namespace std;

int main() {
    char shift;
    cin >> shift;
    map<char, char> chr;
    string charset[] = {"qwertyuiop","asdfghjkl;", "zxcvbnm,./"};
    if(shift == 'R'){
        for(int i=0; i < 3; i++) {
            for(int j=1; j <= 10; j++) 
                chr[charset[i][j]] = charset[i][j-1]; 
        }
    } else {
        for(int i=0; i < 3; i++) {
            for(int j=0; j < 10; j++) 
                chr[charset[i][j]] = charset[i][j+1];
        }
    }

    string str;
    cin >> str;
    for(int i=0; i < str.length(); i++) {
        str[i] = chr[str[i]];
    }
    cout << str << endl;
    return 0;
}