#include <iostream>

using namespace std;

int main()
{
    int num;
    string temp, choice;
    cin >> num >> temp >> choice;
    if(choice == "week") {
        if(num == 5 || num == 6) cout << 53 << endl;
        else cout << 52 << endl;
    } else {
        if(num <= 29) cout << 12 << endl;
        else if(num == 30) cout << 11 << endl;
        else cout << 7 << endl;
    }
    return 0;
}
