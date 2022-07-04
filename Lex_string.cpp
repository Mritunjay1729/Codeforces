#include <iostream>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    map<char, int> xcharacters;
    map<char, int> ycharacters;
    char chr;
    int x, y, k;
    int x_count, y_count;
    string res = "";
    while(t--) {
        res = "";
        xcharacters.clear(); ycharacters.clear();
        cin >> x >> y >> k;
        for(int i=0; i < x; i++) {cin >> chr; xcharacters[chr]++;}
        for(int i=0; i < y; i++) {cin >> chr; ycharacters[chr]++;}
        auto itr1 = xcharacters.begin(), itr2 = ycharacters.begin();
        x_count = y_count = 0;
        while(itr1 != xcharacters.end() && itr2 != ycharacters.end()) {
            if(itr1->first <= itr2->first) {
                if(x_count < k) {
                    res.push_back(itr1->first);
                    xcharacters[itr1->first]--;
                    x_count++;
                    y_count = 0;
                    if(itr1->second == 0) itr1++;
                } else {
                    res.push_back(itr2->first);
                    ycharacters[itr2->first]--;
                    y_count++;
                    x_count = 0;
                    if(itr2->second == 0) itr2++;
                }
            } else {
                if(y_count < k) {
                    res.push_back(itr2->first);
                    ycharacters[itr2->first]--;
                    y_count++;
                    x_count = 0;
                    if(itr2->second == 0) itr2++;
                }else{
                    res.push_back(itr1->first);
                    xcharacters[itr1->first]--;
                    x_count++;
                    y_count = 0;
                    if(itr1->second == 0) itr1++;       
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}