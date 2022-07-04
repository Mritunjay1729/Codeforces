#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    string pattern1 = "AB", pattern2 ="BA";
    int ab, ba, i, j;
    ab = ba = 0;
    for(i=0; i < str.length()-1; i++) {
        for(j=0; j < pattern1.length(); j++) {
            if(str[i+j] != pattern1[j]) break;
        }
        if(j == 2)  ab++;
    
        for(j=0; j < pattern2.length(); j++) {
            if(str[i+j] != pattern2[j]) break;
        }
        if(j == 2)  ba++;
    }
    if(ab == 0 || ba == 0) {cout << "NO" << endl; exit(0);}
    if(ab > 2 || ba > 2) {cout << "YES" << endl; exit(0);}

    int aba, bab;
    aba = bab = 0;
    pattern1="ABA";
    pattern2="BAB";
    for(i=0; i < str.length()-2; i++) {
        for(j=0; j < pattern1.length(); j++) {
            if(str[i+j] != pattern1[j]) break;
        }
        if(j == 3)  aba++;
    
        for(j=0; j < pattern2.length(); j++) {
            if(str[i+j] != pattern2[j]) break;
        }
        if(j == 3)  bab++;
    }

    // cout << ab << " " << ba << endl;

    
    if(ab == 2 && ba == 2) cout << "YES" << endl;
    else if(aba == 1 && bab == 1) cout << "NO" << endl;
    else if(ab == 1 && ba == 1 && (aba+bab==1)) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}