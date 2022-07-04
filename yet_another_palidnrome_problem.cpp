#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, d, prev = -1, flag;
    map<int, int> num;
    cin >> t;
    while(t--) {
        num.clear();
        cin >> n;
        flag = 0;
        for(int i=0; i < n; i++) {
            cin >> d;
            if(flag == 1) continue;
            if(num.find(d) != num.end() && prev != d) flag = 1;
            else if(num.find(d) != num.end() && prev == d) {
                if(num[d] > 1) flag = 1;
                else num[d]++;
            } else num[d]++;
            prev = d;
        }
        if(flag == 0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}