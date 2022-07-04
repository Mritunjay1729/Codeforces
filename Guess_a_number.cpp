#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int mn=-2*(int)10E8, mx = 2*(int)10E8;
    string query;
    int val;
    char ans;
    for(int i=0; i < n; i++) {
        cin >> query >> val >> ans;
        if(query == ">") {
            if(ans == 'Y') mn = max(mn, val+1);
            else mx=min(mx, val);
        }else if(query == "<") {
            if(ans == 'Y') mx = min(mx, val-1);
            else mn = max(mn, val);
        }else if(query == ">=") {
            if(ans == 'Y') mn = max(mn, val);
            else mx=min(mx, val-1);
        }else{
            if(ans == 'Y') mx = min(mx, val);
            else mn = max(mn, val+1);
        }
    }
    if(mn > mx) cout << "Impossible" << endl;
    else cout << mn << endl;
    return 0;
}