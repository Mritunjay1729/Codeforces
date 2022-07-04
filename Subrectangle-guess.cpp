#include <iostream>
#define ll long long int

using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    
    int t;
    cin >> t;
    int m, n;
    ll x, y, max_area = 0, mx, num;
    while(t--) {
        cin >>  m >> n;
        max_area = 0;
        mx = INT32_MIN;
        for(int i=0; i < m; i++) {
            for(int j=0; j < n; j++) {
                cin >> num;
                if(num > mx) {
                    mx = num;
                    x = i; y = j;
                }
            }
        }
        x++;
        y++;
        max_area = max(max_area, x*y);
        max_area = max(max_area, (m-x+1)*(n-y+1));
        max_area = max(max_area, (m-x+1)*y);
        max_area = max(max_area, x*(n-y+1));
        cout << max_area << endl;
    }
    return 0;
}