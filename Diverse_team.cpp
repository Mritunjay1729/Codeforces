#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int num;
    set<int> distinct;
    vector<int> index;
    for(int i=0; i <n; i++) {
        cin >> num;
        if(distinct.find(num) != distinct.end()) continue;
        else {
            distinct.insert(num);
            index.push_back(i+1);
        }
    }
    if(distinct.size() < k) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for(int i=0; i<k; i++) cout << index[i] << " ";
        cout << endl;
    }
    return 0;
}