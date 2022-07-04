#include <iostream>
#include <vector>
#include <set>
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fl(n) for(int i=0; i < n; i++)

using namespace std;

int main() {
    IO;

    int t;
    cin >> t;
    int n, prince, p;
    vector<int> kingdom;
    vector<int> improve;
    while(t--) {
        cin >> n;
        kingdom.clear();
        improve.clear();
        fl(n) kingdom.push_back(0); 
        for(int i=0; i <n; i++) {
            cin >> p;
            int married = 0;
            for(int j=0; j < p; j++) {
                cin >> prince;
                if(married == 1) continue;
                if(kingdom[prince-1] == 0) {
                    kingdom[prince-1] = 1;
                    married=1;
                }
            }
            if(married == 0) improve.push_back(i);
        }
        if(improve.size() == 0) cout << "OPTIMAL" << endl;
        else {
            cout << "IMPROVE" << endl;
            int bride = improve[0];
            for(int i=0; i < n; i++) {
                if(kingdom[i] == 0) {
                    cout << bride+1 << " " << i+1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}