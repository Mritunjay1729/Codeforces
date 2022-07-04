#include <iostream>
#include <set>

using namespace std;

int main() {
    int t, n, max_hop=0, distance;
    cin >> t;
    int hop;
    while(t--) {
        cin >> n >> distance;
        max_hop = 0;
        int flag = 0;
        for(int i=0; i <n; i++) {
            cin >> hop; 
            if(flag == 1) continue;
            max_hop=max(hop, max_hop);
            if(hop == distance) {flag =1;}
        }
        if(flag == 1) cout << 1 << endl;
        else if(max_hop > distance) cout << 2 << endl;
        else if(max_hop == distance) cout << 1 << endl;
        else {
            int count = 0;
            count=distance/max_hop;
            distance%=max_hop;
            // cout << count << " " << max_hop << endl;
            if(distance > 0) count+=1;
            cout << count << endl;
        }
    }
    return 0;
}