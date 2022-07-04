#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map<int, vector<int>> index;
    vector<int> color(n);
    int num;
    for(int i=0; i < n; i++) {
        cin >> num;
        index[num].push_back(i);
    }

    int colors=0;
    for(auto num : index) {
        if(num.second.size() > k) {cout << "NO" << endl; exit(0);}
        for(int i=0; i < num.second.size(); i++) {
            color[num.second[i]]=colors+1;
            colors=(colors+1)%k;
        }
    }
    cout << "YES" << endl;
    for(int i=0; i < n; i++) cout << color[i] << " ";
    cout << endl;
    return 0;
}