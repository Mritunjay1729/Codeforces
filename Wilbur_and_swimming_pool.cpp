#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> vertices;
    int x, y;
    for(int i=0; i < n; i++) {
        cin >> x >> y;
        vertices.push_back({x, y});
    }

    if(n <= 1) cout << -1 << endl;
    else if(n == 2){
        if(vertices[0].first == vertices[1].first || vertices[0].second == vertices[1].second) cout << -1 << endl;
        else cout << abs(vertices[0].first-vertices[1].first)*abs(vertices[0].second-vertices[1].second) << endl;
    }else{
        int max_x = 0, max_y = 0;
        for(int i=1; i < 3; i++) {
            max_x = max(max_x, abs(vertices[i].first-vertices[i-1].first));
            max_y = max(max_y, abs(vertices[i].second-vertices[i-1].second));
        }
        cout << max_x*max_y << endl;
    }
    return 0;
}