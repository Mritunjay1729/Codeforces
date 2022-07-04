#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    string dir;
    cin >> dir;
    vector<int> positions(n);
    for(int i=0; i < n; i++) cin >> positions[i];
    int min_time=INT32_MAX;
    for(int i=1; i < n; i++) {
        if(dir[i] == 'L' && dir[i-1] == 'R') {
            min_time = min(min_time, (positions[i]-positions[i-1])/2);
        }
    }
    if(min_time == INT32_MAX) cout << -1 << endl;
    else cout << min_time << endl;
    return 0;
}