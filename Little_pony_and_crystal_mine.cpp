#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            if(i <= n/2) {
                if(j>=n/2-i && j <= n/2+i) cout << "D";
                else cout << "*";
            }else{
                if(j>=i-n/2 && j <= 3*(n/2)-i) cout << "D";
                else cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}