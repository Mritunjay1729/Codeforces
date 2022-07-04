#include <iostream>

using namespace std;

int main() {
    string num;
    cin >> num;
    int i;
    for(i=0; i < num.length(); i++) if(num[i] == '.') break;
    if(i == num.length()) cout << num << endl;
    else {
        if(num[i-1] != '9') {
            if(num[i+1] >= '5') num[i-1]++;
            cout << num.substr(0, i) << endl;
        }else{
            cout << "GOTO Vasilisa." << endl;
        }
    }
    return 0;
}