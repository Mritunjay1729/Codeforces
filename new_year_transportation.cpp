#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, target, ai;
    int current = 1;
    vector<int> path;
    cin >> n >> target;
    for(int i=0; i < n-1; i++) {
        cin >> ai;
        path.push_back(ai);
    }

    while(1) {
        if(current == target) {printf("YES\n"); break;}
        else if(current < target) current += path[current-1];
        else {printf("NO\n"); break;}
    }
    return 0;
}