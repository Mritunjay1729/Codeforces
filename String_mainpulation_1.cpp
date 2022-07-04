#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    string str;
    cin >> str;
    string temp = str;
    for(int i=1; i < n; i++) str.append(temp);
    map<char, vector<int>> occurrence;
    for(int i=0; i < str.length(); i++) {
        occurrence[str[i]].push_back(i);
    }

    int q;
    cin >> q;
    int position;
    char chr;
    while(q--) {
        cin >> position >> chr;
        if(position <= occurrence[chr].size()) {
            str[occurrence[chr][position-1]] = '@';
            occurrence[chr].erase(occurrence[chr].begin()+position-1);
        }
    }
    for(int i=0; i < str.length(); i++) if(str[i] != '@') cout << str[i];
    cout << endl;
    return 0;
}