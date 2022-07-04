#include <iostream>
#include <map>
#define fl(n) for(int i=0; i <n; i++)

using namespace std;

int main() {
    map<int, map<int, int>> markers, caps;
    int marker, cap;
    cin >> marker >> cap;
    map<int, int> mcount, ccount;
    int d, c;
    fl(marker) {
        cin >> c >> d;
        markers[d][c]++;
        mcount[d]++;
    }
    fl(cap) {
        cin >> c >> d;
        caps[d][c]++;
        ccount[d]++;
    }

    int closed, beautiful;
    closed = beautiful = 0;
    for(auto d : mcount) {
        if(ccount.find(d.first) != ccount.end()) {
            closed+=min(d.second, ccount[d.first]);
        }
    }

    for(auto d : markers) {
        for(auto c: d.second) {
            if(caps.find(d.first) != caps.end() && caps[d.first].find(c.first) != caps[d.first].end()) {
                beautiful+=min(c.second, caps[d.first][c.first]);
            }
        }
    }
    cout << closed << " " << beautiful << endl;
    return 0;
}