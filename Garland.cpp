#include <iostream>
#include <map>

using namespace std;

int main() {
    string vasya, garland;
    cin >> vasya >> garland;
    map<char, int> paper, required;
    for(int i=0; i < vasya.length(); i++) paper[vasya[i]]++;
    for(int i=0; i < garland.length(); i++) required[garland[i]]++;
    int area = 0;
    for(auto color : required) {
        if(paper.find(color.first) != paper.end()) area+=min(color.second, paper[color.first]);
        else {cout << -1 << endl; exit(0);}
    }
    cout << area << endl;
    return 0;
}