#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#define pr pair<int, int>
 
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    vector<pr> points;
    vector<string> grid(n);
    for(int i=0; i <  n; i++) cin >> grid[i];
    unordered_map<int, int> x_coord, y_coord;
    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            if(grid[i][j] == '*') {
                if(x_coord.find(i+1) == x_coord.end() && y_coord.find(j+1) == y_coord.end())
                    {x_coord[i+1]++; y_coord[j+1]++; points.push_back({i+1, j+1});}
                else if(x_coord.find(i+1) != x_coord.end()) x_coord[i+1]++;
                else if(y_coord.find(j+1) != y_coord.end()) y_coord[j+1]++;
            }                
        }
    }
 
    if(x_coord.size()+y_coord.size() ==0) {cout << "YES" << endl; cout << 1 << " " << 1 << endl;}
    else if(x_coord.size() > 2) cout << "NO" << endl;
    else if(x_coord.size() == 1) {
        cout << "YES" << endl;
        cout << x_coord.begin()->first << " " << y_coord.begin()->first << endl;
    }else{
        unordered_map<int, int> :: iterator s, t, u, v;
        s = u = x_coord.begin(), t = v = y_coord.begin();
        u++, v++;
        if(s->second > 1 && t->second > 1) cout << "NO" << endl;
        else if(u->second > 1 && v->second > 1) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            if(s->second > u->second || v->second > t->second) cout << s->first << " " << v->first << endl;
            else if(u->second > s->second || t->second > v->second) cout << u->first << " " << t->first << endl;
            else cout << s->first << " " << v->first << endl;
        }
    }
    return 0;
}