#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, s;
    int time, sum, mx, count = 0, mx_index;
    vector<int> seconds;
    while(t--) {
        cin >> n >> s;
        mx = sum = count = 0;
        seconds.clear();
        for(int i=0; i < n; i++) {
            cin >> time;
            seconds.push_back(time);
        }

        int i=0;
        for(; i < n; i++) {
            if(mx < seconds[i]) {mx = seconds[i]; mx_index = i;}\
            if(sum+seconds[i] <= s) sum+=seconds[i];
            else break;
        }
        // cout << mx << " "  << mx_index << endl;
        count = i;
        sum-=seconds[mx_index];
        for(; i < n && sum <= s; i++) {
            sum+=seconds[i];
        }
        // cout << count << " " << i << endl;
        if(count >= i) cout << 0 << endl;
        else cout << mx_index+1 << endl;
    }

    return 0;
}