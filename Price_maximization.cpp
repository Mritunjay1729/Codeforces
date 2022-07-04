#include <iostream>
#include <vector>
#include <map>
#define fl(n) for(int i=0; i < n; i++)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    int n, k, weight;
    vector<int> arr, first, second;
    map<int, vector<int>> modulo;
    int max_packages = 0;
    while(t--) {
        cin >> n >> k;
        arr.clear();
        modulo.clear();
        max_packages = 0;
        fl(n) {cin >> weight; arr.push_back(weight); modulo[weight%k].push_back(i);}
        for(auto mod : modulo) {cout << mod.first << " : "; for(auto vec : mod.second) cout << arr[vec] << " "; cout << endl;}
        // for(auto mod : modulo) {
        //     if(mod.second.size() == 0) continue;
        //     if(modulo.find(k-mod.first) != modulo.end()) {
        //         first = mod.second;
        //         second = modulo[k-mod.first];
        //         if(first.size() == 0 || second.size() == 0) continue;
        //         int i=0;
        //         while(i < first.size() && i < second.size()) {
        //             cout << first[i] << " " << second[i] << endl;
        //             max_packages += (arr[first[i]]+arr[second[i]])/k;
        //             i++;
        //         }
        //         first.erase(first.begin(), first.begin()+i);
        //         second.erase(second.begin(), second.begin()+i); 
        //     }
        // }
        // cout << max_packages << endl;
    }    
    return 0;
}