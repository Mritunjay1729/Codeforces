#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string team;
    cin >> n;
    unordered_map<string, int> goals;
    while(n--) {
        cin >> team;
        if(goals.find(team) == goals.end()) goals[team] = 1;
        else goals[team]++;
    }
    int max_goal = 0;
    string winner;
    for(auto team : goals) {
        if(team.second > max_goal) {
            max_goal = team.second; winner = team.first;
            }
    }
    cout << winner << endl;
    return 0;
}