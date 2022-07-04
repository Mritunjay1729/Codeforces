#include <iostream>
#include <map>
#include <vector>
#define pr pair<string, int>

using namespace std;

bool contains(string str, string pattern) {
    int i, j;
    for(i=0; i< str.length(); i++) {
        for(j=0; j < pattern.length(); j++) {
            if(str[i+j] != pattern[j]) break;
        }
        if(j == pattern.length()) return true;
    }
    return false;
}

int main() {
    int n, flag = 0;
    cin >> n;
    map<int, pr> strings;
    string str;
    for(int i=0; i < n; i++) {
        cin >> str;
        if(flag == 1) continue;
        if(strings.find(str.length()) == strings.end()) {
            strings[str.length()] = {str, 1};
        }else{
            if(strings[str.length()].first == str) ++strings[str.length()].second;
            else {
                flag = 1;
                cout << "NO" << endl;
            }
        }
    }

    if(flag == 0) {
        string str1, str2;
        map<int, pr> :: iterator itr1, itr2;
        itr1 = itr2 = strings.begin();
        itr2++;
        while(itr2 != strings.end()) {
            str1 = itr1->second.first;
            str2 = itr2->second.first;
            if(contains(str2, str1)) {itr1++; itr2++;}
            else {cout << "NO" << endl; flag = 1; return 0;}
        }
        if(flag == 0) cout << "YES" << endl;
        for(auto string : strings) {
            for(int i=0; i < string.second.second; i++) cout << string.second.first << endl;
        }
    }
    return 0;
}