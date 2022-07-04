#include <iostream> 
#include <map>

using namespace std;

int hcf(int a, int b) {
    if(a == 0) return b;
    if(b == 0) return a;
    if(a > b) return hcf(a-b, b);
    else if(b > a) return hcf(b-a, a);
    else return a;
}

string kPeriodic(string s, int K){
    map<char, int> count;
    for(int i=0; i < s.length(); i++) count[s[i]]++;
    if(count.size() == 1) return s;
    string str = "";
    int x = s.length()/hcf(s.length(), K);
    for(auto &c : count) {
        if(c.second%x != 0) return "";
        c.second/=x;
        while(c.second > 0) {str.push_back(c.first); c.second--;}
    }
    string temp = str;
    while(temp.length() != s.length()) temp.append(str);
    return temp;
}

    int main() {
        string str;
        int n;
        cin >> str >> n;
        string res = kPeriodic(str, n);
        if(res == "") cout << -1 << endl;
        else cout << res << endl;
    }