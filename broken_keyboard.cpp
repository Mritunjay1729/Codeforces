#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string str;
    set<char> working;
    int count;
    char prev;

    while(t--) {
        count = 0;
        cin >> str;
        prev = '.';
        for(int i=0; i < str.length(); i++) {
            if(str[i] != prev) {
                if(count%2 == 1) {
                    if(working.find(prev) == working.end()) {
                        working.insert(prev);
                    }
                }
                prev = str[i];
                count = 1;
            } else count++;
        }
        if(count%2 == 1) {
            if(working.find(prev) == working.end()) {
                working.insert(prev);
            }
        }
        for(auto ch : working) cout << ch;
        cout << endl;
        working.clear();
    }
    return 0;
}