#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, days; //number of instruments, number of days
    cin >> n >> k;
    vector<pair<int, int>> days_to_learn;
    int total_days_to_learn = 0, count = 0;
    for(int i=0; i < n; i++) {
        cin >> days;
        days_to_learn.push_back({days, i});
    }

    // sort(days_to_learn.begin(), days_to_learn.end());
    vector<int> index;
    make_heap(days_to_learn.begin(), days_to_learn.end(), greater<pair<int, int>>());
    while(1) {
        pair<int, int> t = days_to_learn.front();
        pop_heap(days_to_learn.begin(), days_to_learn.end());
        days_to_learn.pop_back();
        make_heap(days_to_learn.begin(), days_to_learn.end(), greater<pair<int, int>>());
        if(total_days_to_learn+t.first > k || count == n) {break;}
        // printf("%d %d\n", t.first, t.second);
        total_days_to_learn += t.first;
        count++;
        index.push_back(t.second+1);
    }
    cout << count << endl;
    for(int i=0; i < count; i++) {
        cout << index[i] << " ";
    }
    cout << endl;
    return 0; 
}