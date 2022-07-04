#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<string, string> translation;
    string lang1, lang2;
    for(int i=0; i < m; i++) {
        cin >> lang1 >> lang2;
        translation[lang1] = lang2;
    }

    string word;
    for(int i=0; i < n; i++) {
        cin >> word;
        if(word.length() <= translation[word].length()) cout << word << " ";
        else cout << translation[word] << " ";
    }
    cout << endl;
    return 0;
}