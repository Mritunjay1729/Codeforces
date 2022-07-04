#include <iostream>
#include <map>

using namespace std;

int main() {
    string str;
    cin >> str;
    map<char, int> count;
    for(int i=0; i < str.length(); i++) {
        count[str[i]]++;
    }

    int single = 0;
    if(count.size() == 1) {cout << "First" << endl; exit(0);}
    else for(auto c : count) if(c.second%2 == 1) single++;
    if(single == 0 || single%2 == 1) cout << "First" << endl;
    else cout << "Second" << endl;
    return 0;
}