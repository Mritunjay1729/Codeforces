#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n, bourles, toy;
    cin >> n >> bourles;
    set<int> tanya_toys;
    for(int i=0; i < n; i++) {cin >> toy; tanya_toys.insert(toy);}
    int money = 0, count = 0;
    vector<int> collections;
    for(int i=1; i <= 10e9; i++) {
        if(bourles-i < 0) break;
        if(tanya_toys.find(i) == tanya_toys.end()) {
            count++;
            collections.push_back(i);
            bourles-=i;
        }
    }
    cout << count << endl;
    for(int i=0; i < collections.size(); i++) cout << collections[i] << " ";
    return 0;
}