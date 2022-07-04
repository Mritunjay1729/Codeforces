#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<char, string> translation;
    vector<char> symbols =  {'>', '<', '+', '-', '.', ',', '[', ']'};
    vector<string> val = {"1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
    for(int i=0; i < 8; i++) {
        translation[symbols[i]] =  val[i];
    }
    string str, binary="";
    cin >> str;
    for(int i=0; i < str.length(); i++) binary.append(translation[str[i]]);
    int p = 1, unary = 0;
    for(int i=binary.size()-1; i >= 0; i--) {
        if(binary[i] == '1') {unary+=p; unary%=(int)10E5+3;}
        p*=2;
        p%=(int)(10E5+3);
    }
    cout << unary << endl;
    return 0;
}