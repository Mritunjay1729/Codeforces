#include <iostream>
#include <vector>
#define fl(n) for(int i=0; i < n; i++)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n;
    int start = 0, s, f, time;
    vector<int> initial, completed;
    while(n--) {
        cin >> m;
        start = 0;
        initial.clear();
        completed.clear();
        fl(m) {cin >> time; initial.push_back(time);}
        fl(m) {cin >> time; completed.push_back(time);}
        fl(m) {
            if(start <= initial[i]) {cout << completed[i] - initial[i] << " "; start = completed[i];}
            else if(start <= completed[i]) {cout << completed[i] - start << " "; start = completed[i];}
            else cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}