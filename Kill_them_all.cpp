#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long int
#define fl(n) for(int i=0; i < n; i++)
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    int n, k, index;
    vector<int> arr;
    set<int> monsters;

    while(t--) {
        arr.clear();
        monsters.clear();
        cin >> n >> k;
        for(int i=0; i < n; i++) {
            cin >> index;
            if(monsters.find(index) == monsters.end()) {
                monsters.insert(index);
                arr.push_back(index);
            }
        }
        sort(arr.begin(), arr.end());
        int i=0, bombs = 0;
        for(int j=arr.size()-1; j >= 0; j--) {
            // cout << i << " "<< arr[j] << endl;
            i+=k;
            bombs++;
            if(j > 0 && i >= arr[j-1]) break;
        }
        cout << bombs << endl;
    }
    return 0;
}