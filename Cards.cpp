#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int zeros, ones;
    zeros = ones = 0;
    for(auto chr : str) {if(chr == 'z') zeros++; else if(chr == 'n') ones++;}
    while(ones-- > 0) cout << "1 ";
    while(zeros-- > 0) cout << "0 ";
    cout << endl;
    return 0;
}