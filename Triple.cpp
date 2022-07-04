#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int t, n, num, flag;
    map<int, int> mp;
    cin >> t;
    while(t--) {
        cin >> n;
        flag = 0;
        mp.clear();
        for(int i=0; i < n; i++){
            cin >> num;
            if(flag == 1) continue;
            if(mp.find(num) == mp.end()) mp[num] = 1;      
            else {
                mp[num]++;
                if(mp[num] >= 3) {
                    printf("%d\n", num);
                    flag = 1;
                }
            }       
        }
        if(flag == 0) printf("%d\n", -1);
    }
    return 0;
}