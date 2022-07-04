#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, first8;
    string telephone;
    while(t--) {
        first8=-1;
        cin >> n >> telephone;
        if(n < 11) cout << "NO" << endl;
        else {
            for(int i=0; i < n; i++) {
                if(telephone[i] == '8') {first8 = i; break;}
            }
            if(first8 == -1) cout << "NO" << endl;
            else if(telephone.substr(first8).length() >= 11) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}