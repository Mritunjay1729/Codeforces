#include <iostream>
#include <vector>
#define ll long long int
#include <map>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin >> n;
    vector<ll> group(n+1, -1);
    map<ll, vector<ll>> edges;
    ll start_x, start_y, x, y;
    cin >> start_x >> start_y;
    group[start_x] = 0;
    group[start_y] = 1;
    for(int i=1; i < n-1; i++) {
        cin >> x >> y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }

    queue<ll> current;
    current.push(start_x);
    current.push(start_y);
    ll front;
    while(!current.empty()) {
        front = current.front();
        current.pop();
        for(auto adj : edges[front]) {
            if(group[adj] != -1) continue;
            else {
                group[adj] = !group[front];
                current.push(adj);
            }
        }
    }

    ll count = 0;
    for(ll i=1; i < group.size(); i++) count+=(group[i] == 1);
    cout << count*(n-count)-(n-1) << endl;
    return 0;
}