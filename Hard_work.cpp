#include <iostream>

using namespace std;

int main() {
    string str1, str2, str3;
    str1 = str2 = str3 = "";
    string temp;
    cin >> temp;
    for(int i=0; i < temp.length(); i++) {
        if(temp[i] == '-' || temp[i] == '_' || temp[i] == ';') continue;
        if(temp[i] >= 97) str1.push_back(temp[i]);
        else str1.push_back(temp[i]+32);
    }

    cin >> temp;
    for(int i=0; i < temp.length(); i++) {
        if(temp[i] == '-' || temp[i] == '_' || temp[i] == ';') continue;
        if(temp[i] >= 97) str2.push_back(temp[i]);
        else str2.push_back(temp[i]+32);
    }

    cin >> temp;
    for(int i=0; i < temp.length(); i++) {
        if(temp[i] == '-' || temp[i] == '_' || temp[i] == ';') continue;
        if(temp[i] >= 97) str3.push_back(temp[i]);
        else str3.push_back(temp[i]+32);
    }

    int a, b, c;
    a = str1.length();
    b = str2.length();
    c = str3.length();
    int s; cin >> s;
    string str;
    for(int i=0; i < s; i++) {
        cin >> temp;
        str = "";
        for(int i=0; i < temp.length(); i++) {
            if(temp[i] == '-' || temp[i] == '_' || temp[i] == ';') continue;
            if(temp[i] >= 97) str.push_back(temp[i]);
            else str.push_back(temp[i]+32);
        }
        // cout << str << endl;
        int flag = 0;
        if(str.length() != a+b+c) {cout << "WA" << endl; continue;}
        if(str.substr(0, a) == str1) {
            if(str.substr(a, b) == str2 && str.substr(a+b) == str3) {cout << "ACC" << endl; flag = 1;}
            else if(str.substr(a, c) == str3 && str.substr(a+c) == str2) {cout << "ACC" << endl; flag =1;}
        }
        if(flag == 1) continue;
        if(str.substr(0, b) == str2) {
            if(str.substr(b, a) == str1 && str.substr(a+b) == str3) {cout << "ACC" << endl; flag = 1;}
            else if(str.substr(b, c) == str3 && str.substr(b+c) == str1) {cout << "ACC" << endl; flag = 1;}
        }
        if(flag == 1) continue;
        if(str.substr(0, c) == str3) {
            if(str.substr(c, a) == str1 && str.substr(a+c) == str2) {cout << "ACC" << endl; flag = 1;}
            else if(str.substr(c, b) == str2 && str.substr(c+b) == str1) {cout << "ACC" << endl; flag = 1;}
        }
        if(flag == 0) cout << "WA" << endl;
    }
    return 0;
}