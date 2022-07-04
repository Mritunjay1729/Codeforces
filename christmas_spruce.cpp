#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> child(n, 0);
    vector<int> parent(n, -1);
    set<int> parents;
    for(int i=1; i < n; i++) {cin >> parent[i]; parents.insert(parent[i]);}
    for(int i=n-1; i>0; i--) {
        if(child[i] == 0) child[parent[i]-1]++;
    }

    // for(int i=0; i < n; i++) cout << i+1 << " " << child[i] << endl;
    // for(auto parent: parents) cout << parent << " ";
    // cout << endl;
    for(int i=0; i < n; i++) if(parents.find(i+1) != parents.end() && child[i] < 3) {printf("No\n"); exit(0);}
    printf("Yes\n");
    return 0;
}