#include <iostream>
#include <bitset>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    cin >> a >> b;
    int hamming = 0;
    string res="";
    for(int i=0; i < a.length(); i++) hamming+=(a[i] != b[i]);
    
    int count = 0;
    if(hamming%2 == 1) {printf("impossible\n"); exit(0);}
    else {
        for(int i=0; i < a.length(); i++) {
            if(a[i] == b[i]) res.push_back(a[i]);
            else {
                if(count < hamming/2) res.push_back(a[i]);
                else res.push_back(b[i]);
                count++;
            }
        }
    }
    cout << res << endl;
    return 0;
}