#include <iostream>
#include<vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, vector<pair<int, string>>> regions;
    int region, points;
    string name;
    for(int i=0; i < n; i++) {
        cin >> name >> region >> points;
        if(regions.find(region) == regions.end() || regions[region].size() < 3) {
            regions[region].push_back({points, name});
            sort(regions[region].begin(), regions[region].end(), greater<pair<int, string>>());
        } else {
            if(points >= regions[region][0].first) {
                swap(regions[region][1], regions[region][2]);
                swap(regions[region][0], regions[region][1]);                    
                regions[region][0].first = points;
                regions[region][0].second = name; 
            } else if(points >= regions[region][1].first) {
                swap(regions[region][1], regions[region][2]);
                regions[region][1].first = points;
                regions[region][1].second = name; 
            } else if(points > regions[region][2].first) {
                regions[region][2].first = points;
                regions[region][2].second = name; 
            }
        }
    }

    for(auto region : regions) {
        if(region.second[1].first == region.second[2].first) cout << "?" << endl;
        else {
            cout << region.second[0].second << " " << region.second[1].second << endl;
        }
    }
    return 0;
}