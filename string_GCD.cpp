#include <iostream>
#include <string.h>

using namespace std;

string truncate(string str) {
    int i=0; 
    while(str[i] == '0') i++;
    if(i == str.length()) return "0";
    else return str.substr(i);
}

void reverse(string &str) {
    for(int i=0, j = str.length()-1; i<j; i++, j--) {
        swap(str[i], str[j]);
    }
}

int compare(string a, string b) {
    if(a.length() > b.length()) return 1;
    else if(a.length() < b.length()) return -1;
    else {
        for(int i=0; i < a.length(); i++) {
            if(a[i] > b[i]) return 1;
            else if(b[i] > a[i]) return -1;
        }
    }
    return 0;
}

string subtract(string a, string b) {
    if(compare(a, b) == 1) subtract(b, a);
    int carry = 0;   
    int n1 = a.length(), n2 = b.length();
    string ans = "";
    int c, d, i=0;
    for(i=1; i <= min(n1, n2); i++) {
        c = a[n1-i] - '0';
        d = b[n2-i] - '0';
        // cout << c << " " << d << endl;
        if(c >= carry + d) {ans.push_back('0' + c-d-carry); carry = 0;}
        else {ans.push_back('0' + 10 + c - d - carry); carry = 1;}
    }
    if(n1 > n2) {
        while(i <= n1){
            c = a[n1 - i] -'0';
            if(c >= carry) {ans.push_back('0' + c - carry); carry = 0;}
            else {ans.push_back('0' + 10 + c - carry); carry = 1;}
            i++;
        }
    } else if(n1 < n2) {
        while(i <= n2) {
            c = b[n2 - i] -'0';
            if(c >= carry) {ans.push_back('0' + c - carry); carry = 0;}
            else {ans.push_back('0' + 10 + c - carry); carry = 1;}
            i++;
        }
    }
    reverse(ans);
    return truncate(ans);
}

string GCD(string a, string b) {
    if(compare(a, b) == 1) {
        a = subtract(a, b);
        return GCD(b, a);
    } else if (compare(a, b) == -1) {
        b = subtract(b, a);
        return GCD(a, b);
    } else {
        return a;
    }
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << GCD(a, b) << endl;
    return 0;
}