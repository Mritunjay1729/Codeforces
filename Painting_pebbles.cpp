#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> piles(n);
    int pile;
    for(int i=0; i < n; i++) {cin >> pile; piles[i] = {pile, i};}
    vector<vector<int>> colors(n, vector<int>());
    sort(piles.begin(), piles.end());
    int k = piles[0].first;
    for(int i=0; i < piles.size(); i++) {
        for(int j=0; j < k; j++) colors[piles[i].second].push_back(1);
        piles[i].first-=k;
        if(piles[i].first > 0) {
            colors[piles[i].second].push_back(1);
            piles[i].first--;
        }
    }

    for(int j=2; j <= m; j++) {
        for(int i=0; i<n; i++) {
            if(piles[i].first > 0) {
                colors[piles[i].second].push_back(j);
                piles[i].first--;
            }
        }
    }
    for(int i=0; i < piles.size(); i++) if(piles[i].first > 0) {cout << "NO" << endl; exit(0);}
    cout << "YES" << endl;
    for(int i=0; i < n; i++) {
        for(int j=0; j < colors[i].size(); j++) {
            cout << colors[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}