#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;
    int i;
    for(i=0; i <= str.length(); i++) {
        if(str[i] == 'r') printf("%d ", i+1);
    }
    i--;
    while(i >= 0) {
        if(str[i] == 'l') printf("%d ", i+1);
        i--;
    }
    return 0;
}