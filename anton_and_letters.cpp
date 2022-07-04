#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    getline(cin, str);
    set<char> characters;
    for(int i=1; i < str.length()-1; i+=3) {
        if(characters.find(str[i]) == characters.end()) characters.insert(str[i]);
    }
    cout << characters.size() << endl;
    return 0;
}