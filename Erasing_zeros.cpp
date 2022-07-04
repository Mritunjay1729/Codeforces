#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int i, j;
    string pattern;
    while(t--) {
        cin >> pattern;
        i=0, j = pattern.length()-1;
        while(i < pattern.length() && pattern[i] == '0') i++;
        while(j > i && pattern[j] == '0') j--;
        int count = 0;
        while(i <= j) {
            if(pattern[i++] == '0') count++;
        }
        cout << count << endl;
    }
}