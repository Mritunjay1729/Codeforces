#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x, y;
    map<int, vector<int>> xax, yax;
    set<pair<int, int>> points;
    while(n--) {
        cin >> x >> y;
        points.insert({x, y});
        xax[x].push_back(y);
        yax[y].push_back(x);
    }
    vector<int> str;
    for(auto &points : xax) {sort(points.second.begin(), points.second.end());}
    for(auto &points : yax) {sort(points.second.begin(), points.second.end());}

    // for(auto line : xax) {
    //     cout << line.first << " : ";
    //     for(auto y : line.second) cout << y << " ";
    //     cout << endl; 
    // }
    // cout << endl;   
    // for(auto line : yax) {
    //     cout << line.first << " : ";
    //     for(auto x : line.second) cout << x << " ";
    //     cout << endl; 
    // }

    int count = 0, flag = 0;;
    for(auto point : points) {
        flag = 0;
        x = point.first;
        y = point.second;
        for(int i=0; i < xax[x].size(); i++) {
            if(xax[x][i] == y) {
                if(i > 0 && i < xax[x].size()-1) {flag++;}
                break;
            }
        }
        for(int i=0; i < yax[y].size(); i++) {
            if(yax[y][i] == x) {
                if(i > 0 && i < yax[y].size()-1) {flag++;}
                break;
            }
        }
        if(flag == 2) count++;
    }
    printf("%d\n", count);
    return 0;
}