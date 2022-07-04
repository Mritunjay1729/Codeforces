#include <iostream>
#include <vector>
#include <algorithm>
#define pr pair<int, int>
#define ll long long int

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int rating;
    vector<pr> skill;
    for(int i=0; i < n; i++) {
        cin >> rating;
        skill.push_back({10-rating%10, rating});
    }
    sort(skill.begin(), skill.end());
    int i=0;
    while(k > 0 && i < skill.size()) {
        if(skill[i].first <= k) {
            skill[i].second += skill[i].first;
            k-=skill[i].first;
            i++;
        }else break;
    }

    ll points = 0;
    for(int i=0; i < skill.size(); i++) {
        points+=skill[i].second/10;
    }
    if(k > 0) points+=k/10;
    cout << min((ll)10*n, points) << endl;
    return 0;
}