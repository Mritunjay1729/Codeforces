#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    for(int i=0; i < n; i++) {
        cin >> str;
        sort(str.begin(), str.end());
        int j;
        for(j=1; j < str.length(); j++) {
            if(str[j] != str[j-1]+1) {cout << "No" << endl; break;}
        }
        if(j == str.length()) cout << "Yes" << endl; 
    }
    return 0;
}