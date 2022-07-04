#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    map<int, int> count;
    cin >> t;
    int n, side, flag, mx, mn;
    while(t--) {
        cin >> n;
        mn = INT32_MAX;
        mx = 0;
        flag = 0;
        count.clear();
        for(int i=0; i < 4*n; i++) {
            cin >> side;
            count[side]++;
            mx = max(mx, side);
            mn = min(mn, side); 
        }
        int area = mx*mn;
        if(count[mx] != count[mn] || count[mx]%2 != 0) {flag = 1;}
        else {
            count[mx]=0;
            count[mn]=0;
        }
        if(flag == 0) {
            for(auto side: count) {
                if(side.second > 0) {
                    if(area%side.first != 0) {flag = 1; break;}
                    int sec = area/side.first;
                    if(count.find(sec)==count.end() || count[sec]!=side.second) {flag = 1; break;}
                    else {count[sec]=0; count[side.first]=0;}
                }
            }
        }
        if(flag == 1) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}