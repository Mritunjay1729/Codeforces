#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, balloon;
    cin >> n;
    vector<pair<int, int>> ballons(n);
    for(int i=0; i < n; i++) {cin >> balloon; ballons[i] =  {balloon, i+1};}
    if(n == 1 || (n == 2 && ballons[0].first == ballons[1].first)) {printf("-1\n"); exit(0);}
    sort(ballons.begin(), ballons.end(), greater<pair<int,int>>());
    cout << 1 << endl;
    cout << ballons[n-1].second << " ";
    cout << endl;
    return 0;
}