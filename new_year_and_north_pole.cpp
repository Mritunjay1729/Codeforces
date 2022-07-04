#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0, prev_x = 0, flag = 0;
    int distance;
    string dir;
    for(int i=0; i < n; i++) {
        cin >> distance >> dir;
        if(flag == 1) continue;
        if(x == 0) {
            if(dir != "South" || distance > 20000) flag = 1;
            else x=(x-distance)%40000;
        }else if(x==-20000 || x==20000) {
            if(dir != "North" || distance > 20000) flag = 1;
            else x=(x+distance)%40000;
        } else if(dir == "South") {
            int t =(x-distance)%40000;
            if(distance > 20000 || (x > 0  ^ t> 0) || (x > 20000 ^ t > 20000) || (x > -20000 ^ t > -20000)) flag = 1;
            else x=(x-distance)%40000;
        }
        else if(dir == "North") {
            int t = (x+distance)%40000;
            if(distance > 20000 ||  (x > 0 ^ t > 0) || (x > 20000 ^ t > 20000) || (x > -20000 ^ t > -20000)) {flag = 1;}
            else x=(x+distance)%40000;
        }
    }
    // cout << flag << " " << x << endl;
    if(flag == 1 || x != 0) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}