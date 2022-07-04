#include <iostream>
#include <vector>
#define fl(n) for(int i=0; i <n; i++)
#define ll long long int

using namespace std;

bool isPossible(vector<int> &given, vector<int> &required, int magic, int cookies) {
    for(int i=0; i < required.size(); i++) {
        if(magic+given[i] < required[i]*cookies) return false;
        if(given[i] < required[i]*cookies) 
            magic-=(required[i]*cookies-given[i]);
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    int ingredients = 0;
    int mn=INT32_MAX, mx=0;
    vector<int> required(n), given(n);
    fl(n) {cin >> required[i]; ingredients+=required[i];}
    fl(n) {cin >> given[i]; mn = min(mn, given[i]/required[i]); mx = max(mx, given[i]/required[i]);}
    mx+=m/ingredients;

    int l = mn, r= mx, mid;
    int total = 0;
    while(l <= r) {
        mid=(l+r)/2;
        if(isPossible(given, required, m, mid)) {total = mid; l=mid+1;}
        else r = mid-1;
    }
    cout << total << endl;
    return 0;
}