#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string word, nword;
    int i=0, j = 0, flag = 0;
    while(n--) {
        cin >> word >> nword;
        i = j = flag = 0;
        while(j < nword.size()) {
            if(word[i] == nword[j]) {i++; j++;}
            else if(i > 0 && nword[j] == word[i-1]) j++;
            else {flag = 1; break;}
        }
        if(flag == 0 && i==word.size()) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;
}