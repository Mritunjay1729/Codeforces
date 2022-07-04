#include <iostream>

using namespace std;

int  main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    
    int t;
    cin >> t;
    string str;
    int n, z, o, special, single;
    while(t--) {
        special = single = 0;
        cin >> n;
        for(int i=0; i < n; i++) {
            cin >> str;
            z = o = 0;
            int result = 0;
            for(int j=0; j < str.length(); j++) {
                if(str[j] == '0') z++;
                else o++;
            }
            if(z == 0) {
                if(o%2) single++;
                else result++;
            }else if(o == 0) {
                if(z%2) single++;
                else result++;
            }else if(z%2 == 0 && o%2 == 0) result++;
            else if(z%2 == 0 || o%2 == 0) single++;
            else special++;
        }
        special%=2;
        if(special == 1 && single == 0) cout << n-1 << endl;
        else cout << n << endl;
    }     
    return 0;
}