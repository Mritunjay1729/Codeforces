#include <iostream>
#include <map>

using namespace std;

//Bulbasaur

int main() {
    string str;
    cin >> str;
    map<char, int> frequency;
    for(int i=0; i < str.length(); i++) frequency[str[i]]++;
    int count = INT32_MAX;
    count = min(count, frequency['B']);
    count = min(count, frequency['u']/2);
    count = min(count, frequency['l']);
    count = min(count, frequency['b']);
    count = min(count, frequency['a']/2);
    count = min(count, frequency['s']);
    count = min(count, frequency['r']);
    cout << count << endl;
    return 0;
}