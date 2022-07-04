#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    map<int, set<int>> connections;
    vector<int> count(n+1, 0);
    int a, b;
    for(int i=0; i < l; i++) {
        cin >> a >> b;
        count[a]++; count[b]++;
        connections[a].insert(b);
        connections[b].insert(a);
    }

    vector<int> kicked_out;
    int single = 0, kicked = 0;
    do{
        single = 0;
        kicked++;
        kicked_out.clear();
        for(int i=1; i <= n; i++) {
            if(connections[i].size() == 1) {
                kicked_out.push_back(i);
                single++;
            }
        }

        for(int i=0; i < kicked_out.size(); i++) {
            for(auto connection : connections[kicked_out[i]]) {
                count[connection]-=count[kicked_out[i]];
                connections[connection].erase(kicked_out[i]);
            }
            count[kicked_out[i]] = 0;
            connections.erase(kicked_out[i]);
        }
    }while(single != 0);
    cout << kicked-1<< endl;
    return 0;
}