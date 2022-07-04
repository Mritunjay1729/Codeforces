#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string maths;
    cin >> maths;
    int i = 0;
    int o, t, th;
    o = t = th = 0;
    while(i < maths.length()) {
        if(maths[i] == '1') o++;
        else if(maths[i] == '2') t++;
        else th++;
        i+=2;
    }
    i=0;
    while(o--) {maths[i] = '1'; i+=2;}
    while(t--) {maths[i] = '2'; i+=2;}
    while(th--) {maths[i] = '3'; i+=2;}
    cout << maths << endl;
    return 0;
}