#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int lucky = 0;
    for(int i=0; i < str.length(); i++) {
        if(str[i] == '4' || str[i] == '7') lucky++;
    }

    if(lucky == 0) {cout << "NO" << endl; exit(0);}
    while(lucky > 0) {
        if(lucky%10 != 4 && lucky%10 != 7) {cout << "NO" << endl; exit(0);}
        lucky/=10;
    }
    cout << "YES" << endl;
    return 0;
}