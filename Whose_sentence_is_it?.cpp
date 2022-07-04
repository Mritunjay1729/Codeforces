#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    string chat;
    int count = 0;
    getline(cin, chat);
    for(int i=0; i < t; i++) {
        getline(cin, chat);
        count = 0;
        if(chat.substr(0, 5) == "miao.") count = 1;
        if(chat.length()>= 5 && chat.substr(chat.length()-5) == "lala.") {
            if(count == 1) count = 3;
            else count = 2;
        }
        if(count == 0 || count == 3) cout << "OMG>.< I don't know!" << endl;
        else if(count == 1) cout << "Rainbow's" << endl;
        else cout << "Freda's" << endl;
    }
}