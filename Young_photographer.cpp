#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, pos;
    cin >> n >> pos;
    vector<int> track(1001, 0);
    int x, y;
    for(int i=0; i < n; i++) {
        cin >> x >> y;
        if(x > y) swap(x, y);
        track[x]++;
        track[y+1]--;
    }

    for(int i=1; i < track.size(); i++) track[i]+=track[i-1];
    // for(int i=0; i < 15; i++) cout << track[i] << " ";
    // cout << endl;
    int dist = -1;
    int i = pos;
    while(i < 1001 && track[i] != n) i++;
    if(i < 1001 && track[i] == n) dist = i-pos;
    i = pos;
    while(i >= 0 && track[i] != n) i--;
    if(i >= 0 && track[i] == n) {
        if(dist == -1) dist = pos-i;
        else dist = min(dist, pos-i);
    }
    cout << dist << endl;
    return 0;
}