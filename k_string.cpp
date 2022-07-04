#include <iostream>
#include <map>

using namespace std;

int main() {
    map<char, int> mp;
    int k = 0;
    cin >> k;
    string str;
    cin >> str;
    for(int i=0; i < str.length(); i++) {
        if(mp.find(str[i]) == mp.end()) mp[str[i]] = 1;
        else mp[str[i]]+=1;
    }
    for(auto x : mp) {
        if(x.second%k != 0) {
            printf("%d\n", -1);
            exit(0);
        } else {
            mp[x.first]/=k;
        }
    }

    // for(auto itr : mp) cout << itr.first << " " << itr.second << endl;
    string res = "";
    while(1) {
        for(auto itr: mp) {
            for(int i=0; i < itr.second; i++) res.push_back(itr.first);
        }
        if(res.length() >= str.length()) break;
    }
    cout << res << endl;
    return 0;
}