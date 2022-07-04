#include <iostream>

using namespace std;

int main() {
    int n, record;
    cin >> n;
    string res;
    int prev = -1;
    for(int i=0; i < n; i++) {
        cin >> record;
        if(i == n-1 ) {
            record-prev<0?res="DOWN":res="UP";
            if(prev == -1 && record != 0) res = "-1";
            if(record == 0) res = "UP";
            if(record == 15) res = "DOWN";
        }
        prev = record;
    }
    cout << res << endl;
    return 0;
}