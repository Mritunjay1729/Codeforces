#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int q;
    cin >> q;
    int n, m, k, prev, num, flag = 0;
    while(q--) {
        flag = 0;
        cin >> n >> m >> k;
        cin >> prev;
        for(int i=1; i < n; i++) {
            cin >> num;
            if(flag == 1) continue;
            if(prev>=num) {
                m+=prev-num;
                prev-=(prev-num);
                if(prev > k) m+=k;
                else m+=prev;
            }else if((num-prev)>k) {
                int x = (num-prev)-k;
                if(x <= m) m-=x;
                else {
                    flag = 1;
                }
            }else if((num-prev) < k) {
                int x = k-(num-prev);
                m+=x<prev?x:prev;
            }
            prev = num;
        } 
        if(flag == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}