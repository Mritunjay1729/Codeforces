#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    string str;
    while(t--) {
        cin >> n >> str;
        if(n == 1) cout << 0 << endl;
        else{
            int i=0;
            while(str[i] == '<') i++;
            int j = n-1;
            while(str[j] == '>') j--;
            cout << min(i, n-j-1) << endl;
        }
    }
    return 0;
}