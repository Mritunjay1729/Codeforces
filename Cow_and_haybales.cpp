#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, d, haybales, initial= 0;
    while(t--) {
        cin >> n >> d;
        cin >> initial;
        for(int i=1; i < n; i++) {
            cin >> haybales;
            if(d == 0) continue;
            if(haybales > 0) {
                if(d - haybales*i >= 0) {
                    d-=haybales*i;
                    initial+=haybales;
                } else {
                    initial+=(d/i);
                    d = 0;
                }
            }
        }
        cout << initial << endl;
    }
    return 0;
}