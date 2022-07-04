#include <iostream>
#include <vector>
#define fl(s, n) for(int i=s; i < n; i++)
#include <set>

using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    
    int t;
    cin >> t;
    int n;
    vector<int> permutation(100);
    vector<int> index(100);
    set<int> used;
    while(t--) {
        cin >> n;
        fl(0, n) cin >> permutation[i];
        fl(0, n) index[permutation[i]] = i;
        int j = 1;
        used.clear();
        while(j < n && index[j] == j-1) j++;
        while(j < n+1) {
            if(index[j] > j-1 && 
                used.find(index[j]) == used.end() &&
                permutation[index[j]] < permutation[index[j]-1]    
            ) {
                used.insert(index[j]);
                int temp = permutation[index[j]-1];
                swap(permutation[index[j]], permutation[index[j]-1]);
                index[j]--;
                index[temp]++;
            }else j++;
            while(j < n+1 && index[j] == j-1) j++;
        }
        fl(0, n) cout << permutation[i] << " ";
        cout << endl;
    }
    return 0;
}