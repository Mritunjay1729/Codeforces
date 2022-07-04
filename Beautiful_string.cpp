#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, flag = 0;
    cin >> t;
    string str;
    while(t--) {
        cin >> str;
        flag = 0;
        if(str.size() == 1) {
            if(str[0] != '?') cout << str << endl;
            else str[0]='a'; cout << str << endl;
            continue;
        }
        if(str[0] == '?') {
            if(str[1] == '?') str[0] = 'a';
            else str[0] = 'a'+(str[1]-'a'+1)%3;
        } else if(str[0] == str[1]) {cout << -1 << endl; continue;}

        for(int i=1; i < str.length()-1; i++) {
            if(str[i] == '?' && str[i+1] != '?') {
                if(str[i-1] == str[i+1]) str[i] = 'a' + (str[i-1]-'a'+1)%3;
                else str[i] = 'a' + (2*(str[i-1]+str[i+1]-2*'a'))%3;
            }else if(str[i] == '?' && str[i+1] == '?') {
                str[i] = 'a' + (str[i-1]-'a'+1)%3;
            }
            else {
                if(str[i] != '?' && str[i] == str[i+1]) {cout << -1 << endl; flag = 1; break;}
            }
        }
        if(flag == 1) continue;
        int n = str.length();
        if(str[n-1] == '?') str[n-1] = 'a' + (str[n-2]-'a'+1)%3;
        cout << str << endl;
    }    
    return 0;
}