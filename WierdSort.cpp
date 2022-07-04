#include <iostream>
#include <vector>
#include <set>
#define fl(n) for(int i=0; i < n; i++)
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
    IO;

    int t;
    cin >> t;
    int n, m, val, flag;
    vector<int> arr;
    set<int> positions;
    while(t--) {
        cin >> n >> m;
        flag = 0;
        arr.clear();
        positions.clear();
        fl(n) {cin >> val; arr.push_back(val);}
        fl(m) {cin >> val; positions.insert(val);}
        for(int i=0; i < n; i++) {
            for(int j=0; j<n-i-1; j++) {
                if(arr[j] > arr[j+1]) {
                    if(positions.find(j+1) != positions.end()) {
                        swap(arr[j], arr[j+1]);
                    } else{
                        printf("NO\n");
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 1) break;
        }
        if(flag == 0) printf("YES\n");
    }
    return 0;
}