#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> puzzles(m);
    for(int i=0; i <m ;i++) cin >> puzzles[i];
    sort(puzzles.begin(),puzzles.end());

    int mn_diff = INT32_MAX;
    for(int i=0, j=n-1; j<m; i++, j++) {
        mn_diff = min(mn_diff, abs(puzzles[i]-puzzles[j]));
    }
    printf("%d\n", mn_diff);

    return 0;
}