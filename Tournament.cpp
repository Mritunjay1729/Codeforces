#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x, y;
    vector<int> games(n+1, 0), wins(n+1, 0);
    for(int i=0; i < (n*(n-1))/2-1; i++) {
        cin >> x >> y;
        games[x]++;
        games[y]++;
        wins[x]++;
    }

    vector<int> odd;
    for(int i=1; i <= n; i++) if(games[i] != n-1) odd.push_back(i);
    if(wins[odd[0]] >= wins[odd[1]]) cout << odd[0] << " " << odd[1] << endl;
    else if(wins[odd[0]] < wins[odd[1]]) cout << odd[1] << " " << odd[0] << endl;
    return 0;
}