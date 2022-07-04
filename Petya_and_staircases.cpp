#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int stairs;
    set<int> dirty;
    for(int i=0; i < d; i++) {
        cin >> stairs;
        dirty.insert(stairs);
    }
    if(dirty.find(1) != dirty.end() || dirty.find(n) != dirty.end()) {cout << "NO" << endl; exit(0);}
    int prev = -1, count = 0;
    for(auto d : dirty) {
        if(d == prev+1) {
            count++;
            if(count == 3) {cout << "NO" << endl; exit(0);}
        }else {
            if(count == 3) {cout << "NO" << endl; exit(0);}
            count = 1;
        }
        prev = d;
    }
    cout << "YES" << endl;
    return 0;
}