#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, index;
    cin >> n;
    vector<vector<int>> field(3, vector<int>());
    for(int i=1; i <=n; i++) {
        cin >> index;
        if(index == 1) field[0].push_back(i);
        else if(index == 2) field[1].push_back(i);
        else if(index == 3) field[2].push_back(i);
    }
    int max_teams = min(field[0].size(), min(field[1].size(), field[2].size()));
    cout << max_teams << endl;
    for(int i=0; i < max_teams; i++)
        printf("%d %d %d\n", field[0][i], field[1][i], field[2][i]);
    return 0;
}