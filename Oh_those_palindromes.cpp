#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#define pr pair<int, char>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    map<char, int> count;
    for(auto s: str) {
        count[s]++;
    }
    string res = "";
    for(auto &str : count) {
        while(str.second > 0) {res.push_back(str.first); str.second--;} 
    }
    cout << res << endl;
    return 0;
}