#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int i=0, n = str.length(), last = 0;
    string res = "";
    while(i < str.length()) {
        last = i;
        if(str[i] == '@') {cout << "No solution" << endl; exit(0);} 
        i++;
        while(i < n && str[i] != '@') i++;
        if(i == n) {
            if(res.size() == 0) {cout << "No solution" << endl; exit(0);}
            res.pop_back(); res.append(str.substr(last)); break;
        }
        i++;
        if(i < n && str[i] == '@' || i == n) {cout << "No solution" << endl; exit(0);} 
        i++;
        res.append(str.substr(last, i-last));
        if(i != n) res.push_back(',');
        last = i;
    }
    cout << res << endl;
    return 0;
}