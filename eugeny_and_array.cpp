#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    int num, sum = 0;
    for(int i=0; i <n; i++) {
        cin >> num;
        sum += num;
    }
    
    int r, s, range, rearrange;
    if(abs(sum) <= n) range = n-abs(sum);
    else range = 0;
    while(q--) {
        cin >> r >> s;
        rearrange = s-r+1;
        if(rearrange%2 == 1) {printf("0\n"); continue;}
        if(rearrange <= range) printf("1\n");
        else printf("0\n");
    }
    return 0;
}