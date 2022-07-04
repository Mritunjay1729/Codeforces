#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> participants(m, vector<int>(3));
    vector<double> time(m);
    vector<vector<int>> field(n+1, vector<int>());
    for(int i=0; i < m; i++) {
        cin >> participants[i][0] >> participants[i][1] >> time[i] >> participants[i][2];
        for(int j=participants[i][0]; j <= participants[i][1]; j++) {
            field[j].push_back(i);
        }
    }

    int profit = 0, money = 0, t = INT32_MAX;
    for(int i=1; i < n+1; i++) {
        t = INT32_MAX, money = 0;
        for(int j=0; j < field[i].size(); j++) {
            if(time[field[i][j]] < t) {
                t=time[field[i][j]];
                money = participants[field[i][j]][2];
            }
        }
        profit+=money;
    }
    cout << profit << endl;

    return 0;
}