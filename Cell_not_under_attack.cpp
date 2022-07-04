#include <iostream>
#include <vector>
#define ll long long int
#include <set>

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;

    set<int> rows, cols;
    ll free = n*n;
    ll x, y;
    for(int i=0; i < m; i++) {
        cin >> x >> y;
        if(rows.find(x) == rows.end() && cols.find(y) == cols.end()) {
            free-=2*n-1;
            free+=rows.size()+cols.size();
            cout << free << " ";
            rows.insert(x);
            cols.insert(y);
        }else if(rows.find(x) != rows.end() && cols.find(y) == cols.end()) {
            free-=n;
            free+=rows.size();
            cout << free << " ";
            cols.insert(y);
        }else if(cols.find(y) != cols.end() && rows.find(x) == rows.end()){
            free-=n;
            free+=cols.size();
            cout << free << " ";
            rows.insert(x);
        }else{
            cout << free << " ";
        }
    }
    cout << endl;
    return 0;
}