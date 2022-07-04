#include <iostream>

using namespace std;

void ask(int l, int r, string &str) {
    int n, mid;
    char chr;
    if(l <= r) {
        if(l == r) {
            cout << "? " << 1 << " " << l << endl;
            cin >> chr;
            str[l] = chr;
        }else{
            cout << "? " << 2 << " " << l << " " << r << endl;
            cin >> n;
            if(n == 1) {
                cout << "? " << 1 << " " << l << endl;
                cin >> chr;
                for(int i=l; i <= r; i++) str[i] = chr;   
            }else{
                mid = (l+r)/2;
                ask(l, mid, str);
                ask(mid+1, r, str);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    string str;
    for(int i=0; i < n+1; i++) str.push_back('#');
    ask(1, n, str);
    cout << "!" << " " << str.substr(1) << endl;
    fflush(stdout);
    return 0;
}