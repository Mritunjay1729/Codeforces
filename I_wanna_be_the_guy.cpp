#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, level;
    set<int> levels;
    cin >> n;
    int a; cin >> a;
    while(a--) {
        cin >> level;
        if(levels.find(level) == levels.end()) levels.insert(level);
    }
    int b; cin >> b;
    while(b--) {
        cin >> level;
        if(levels.find(level) == levels.end()) levels.insert(level);
    }
    if(levels.size() == n) printf("I become the guy.\n");
    else printf("Oh, my keyboard!\n");
    return 0;
}