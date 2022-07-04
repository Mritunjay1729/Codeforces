#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, index;
    cin >> n;
    set<int> indices;
    while(n--) {cin >> index; indices.insert(index);}
    int i = 1;
    for(auto index: indices) {
        if(index != i++) {cout << i-1 << endl; exit(0);}
    }
    cout << i << endl;
    return 0;
}