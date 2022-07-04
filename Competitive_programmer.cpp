#include <iostream>

using namespace std;

int main() {
    int t;
    string str;
    cin >> t;
    while(t--) {
        cin >> str;
        int even = 0, zero = 0, sum = 0;
        for(int i=0; i < str.length(); i++) {
            if(str[i] == '0') zero++;
            else if((str[i]-'0')%2 == 0) even++;
            sum+=str[i]-'0';
        }
        even+=zero-1;
        if(sum%3 == 0 && even > 0 && zero > 0) cout << "red" << endl;
        else cout << "cyan" << endl;
    }
    return 0;
}