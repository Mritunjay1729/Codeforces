#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int i=0, flag = 0;
    string res = "";
    if(str[i] == '-') {flag = 1; i++;}
    if(flag == 1) res.push_back('(');
    res.push_back('$');
    while(i < str.length() && str[i] != '.') i++;
    res.append(str.substr((flag == 1), (i-(flag==1))%3));
    int j = (flag == 1) + (i-(flag==1))%3;
    while(j < i) {
        if(j != (flag==1)) res.push_back(',');
        res.append(str.substr(j, 3));
        j+=3;
    }
    if(i < str.length() && str[i] == '.') {
        res.push_back('.'); i++;
        if(str.length()-i == 1) str.push_back('0');
        res.append(str.substr(i, 2));
    }else{
        res.append(".00");
    }
    if(flag == 1) res.push_back(')');
    cout << res << endl;
    return 0;
}