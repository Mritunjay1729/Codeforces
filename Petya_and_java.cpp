#include <iostream>

using namespace std;

int main() {
    string number;
    cin >> number;
    if(number[0] != -1) {
        if(number.length() < 3 || number.length() == 3 && number <= "127") cout << "byte" << endl;
        else if(number.length() < 5 || number.length() <= 5 && number <= "32767") cout << "short" << endl;
        else if(number.length() < 10 || number.length() <= 10 && number <= "2147483647") cout << "int" << endl;
        else if(number.length() < 19 || number.length() <= 19 && number <= "9223372036854775807") cout << "long" << endl;
        else cout << "BigInteger" << endl;
    }else{
        number = number.substr(1);
        if(number.length() < 3 || number.length() <= 3 && number <= "128") cout << "byte" << endl;
        else if(number.length() < 5 || number.length() <= 5 && number <= "32768") cout << "short" << endl;
        else if(number.length() < 10 || number.length() <= 10 && number <= "2147483648") cout << "int" << endl;
        else if(number.length() < 19 || number.length() <= 19 && number <= "9223372036854775808") cout << "long" << endl;
        else cout << "BigInteger" << endl;
    }
    return 0;
}