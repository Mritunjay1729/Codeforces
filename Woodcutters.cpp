#include <iostream>
#include <vector>
#define ll long long int
#define pr pair<ll, ll>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<pr> trees;
    ll x, h;
    for(int i=0; i < n; i++) {
        cin >> x >> h;
        trees.push_back({x, h});
    }
    ll count = 2, prev_x = trees[0].first;
    for(int i=1; i < n-1; i++) {
        if(trees[i].second < trees[i].first-prev_x) {
            count++;
            prev_x = trees[i].first;
        }else if(trees[i].first+trees[i].second < trees[i+1].first) {
            count++;
            prev_x = trees[i].first + trees[i].second;
        }else{
            prev_x = trees[i].first;
        }
    }
    if(n == 1) cout << 1 << endl;
    else cout << count << endl;
    return 0;
}