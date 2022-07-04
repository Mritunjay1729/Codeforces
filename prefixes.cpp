#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for(int i=1; i < n; i+=2) {
        if(i%2 == 1 && str[i] == str[i-1]) {
            if(str[i] == 'a') str[i] = 'b';
            else str[i] = 'a';
            count++;
        }
    }
    cout << count << endl;
    cout << str << endl;
    return 0;
}