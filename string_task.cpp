#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    string result_str = "";
    for(int i=0; i < str.length(); i++) {
        if(str[i] <= 90) str[i]+=32;
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y') 
            continue;
        result_str.push_back('.');
        result_str.push_back(str[i]);
    }
    cout << result_str << endl;
    return 0;
}