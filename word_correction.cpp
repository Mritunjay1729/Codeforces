#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string word;
    cin >> word;
    string correct_word = "";
    correct_word.push_back(word[0]);
    int flag = 0;
    if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' 
    || word[0] =='o' || word[0] == 'u' || word[0] == 'y')
    flag = 1;

    for(int i=1; i < n; i++) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' 
        || word[i] =='o' || word[i] == 'u' || word[i] == 'y') {
            if(flag == 1) continue;
            else {
                correct_word.push_back(word[i]);
                flag = 1;
            }
        } else {
            correct_word.push_back(word[i]);
            flag = 0;
        }
    }
    cout << correct_word << endl;
    return 0;
}