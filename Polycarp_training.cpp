#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> contests;
    int max_contest = 0, contest;
    for(int i=0; i < n; i++) {cin >> contest; contests[contest]++; max_contest = max(contest, max_contest);}
    int res;
    auto con = contests.begin();
    for(int i=1; i <= max_contest; i++) {
        while(con != contests.end() && con->first < i) con++;
        while(con != contests.end() && con->second < 1) con++;
        if(con == contests.end()) break;
        contests[con->first]--;
        res = i;
    }
    cout << res << endl;
    return 0;
}