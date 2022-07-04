#include <iostream>

using namespace std;

int main() {
    string str; cin >> str;
    int k; cin >> k;
    int alpha[26];
    int max_val = 0, result = 0;
    for(int i=0; i < 26; i++) {cin >> alpha[i]; max_val = max(max_val, alpha[i]);}
    int i;
    for(i=0; i < str.length(); i++) {
        result+=(i+1)*alpha[str[i]-'a'];
    }
    for(int j=0; j < k; j++) {
        result+=max_val*(i+j+1);
    }
    cout << result << endl;
    return 0;
}