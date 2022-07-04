#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> bus(n);
    for(int i=0; i < n; i++) cin >> bus[i];
    int flag = 0;
    for(int i=0; i < n; i++) {
        if(bus[i][0] == 'O' && bus[i][1] == 'O') {
            flag = 1; 
            bus[i][0] = '+';
            bus[i][1] = '+';
            break;
        }else if(bus[i][3] == 'O' && bus[i][4] == 'O') {
            flag = 1;
            bus[i][3] = '+';
            bus[i][4] = '+';
            break;
        }
    }   

    if(flag == 0) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for(int i=0; i < n; i++) cout << bus[i] << endl;
    }
    return 0; 
}