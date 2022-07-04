#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    vector<string> pincodes;
    string pincode;
    vector<int> unique(10);
    set<string> distinct;
    while(t--) {
        cin >> n;
        pincodes.clear();
        distinct.clear();
        for(int i=0; i < unique.size(); i++) unique[i] = -1;
        for(int i=0; i < n; i++) {
            cin >> pincode; 
            pincodes.push_back(pincode);
            if(distinct.find(pincode) != distinct.end()) continue;
            distinct.insert(pincode);
            unique[i] = 0;
        }
        
        if(distinct.size() == n) {
            cout << 0 << endl;
            for(auto pincode : pincodes) cout << pincode << endl;
            continue;
        }

        string temp;
        int flag, count = 0;
        for(int i=0; i < n; i++) {
            if(unique[i] == -1) {
                flag = 0;
                for(int j=0; j < 4; i++) {
                    temp = pincodes[i];
                    int x = pincodes[i][j]-'0';
                    for(int k=(x+1)%10; k!=x; k=(k+1)%10) {
                        temp[j] = '0' + k;
                        if(distinct.find(temp) == distinct.end()) {
                            flag = 1;
                            distinct.insert(temp);
                            pincodes[i] = temp;
                            count++;
                            break;
                        }
                    }
                    if(flag == 1) break;
                }
            }
        }
        cout << count << endl;
        for(auto pincode : pincodes) cout << pincode << endl;
    }
    return 0;
}