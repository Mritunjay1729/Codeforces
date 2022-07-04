#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, t;
    cin >> n >> t;
    vector<ll> chapters(n);
    for(int i=0; i < n; i++)  cin >> chapters[i];
    sort(chapters.begin(), chapters.end());
    ll time = 0;
    for(int i=0; i<n; i++) {
        time += t*chapters[i];
        if(t > 1) t--;
    }
    cout << time << endl;
    return 0;
}