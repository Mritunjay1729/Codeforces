#include <iostream>
#include <vector>
#define pr pair<int, int>

using namespace std;

int main() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    vector<pr> outcomes;
    int count = 0;
    if(a > b) {
        for(int i=a; i <= x; i++) {
            for(int j=b; j < min(i, y+1); j++) {
                outcomes.push_back({i, j});
                count++;
            }
        }
    }else {
        for(int i=b+1; i <= x; i++) {
            for(int j=b; j < min(i, y+1); j++) {
                outcomes.push_back({i, j});
                count++;
            }
        }
    }
    cout << count << endl;
    if(count > 0) {
        for(int i=0; i < count; i++)  cout << outcomes[i].first << " " << outcomes[i].second << endl;
    }
    return 0;
}