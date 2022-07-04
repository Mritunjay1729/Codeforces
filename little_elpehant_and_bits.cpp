#include <iostream>

using namespace std;

int main() {
    string bin;
    cin >> bin;
    string bin_less = "";
    for(int i=0; i< bin.length(); i++) {
        if(i == bin.length()-1) {
            cout << bin_less << endl;
            break;
        }
        if(bin[i] == '0') {
            bin_less.append(bin.substr(i+1));
            cout << bin_less << endl;
            break;
        }
        bin_less.push_back('1');
    }
    return 0;
}