#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, x, y, flag;
    pair<int, int> prev;
    set<pair<int, int>> packages;
    int count = 0;
    string path;
    while(t--) {
        cin >> n;
        flag = 0;
        packages.clear();
        for(int i=0; i < n; i++) {
            cin >> x >> y;
            packages.insert({x, y});
        }

        // cout << endl;
        // for(auto package : packages) printf("(%d, %d) ", package.first, package.second);
        // cout << endl;
        prev = {0, 0};
        count  = 0;
        path = "";
        for(auto package : packages) {
            if(package.first >= prev.first && package.second >= prev.second){
                if(package.first==prev.first || package.second == prev.second) {
                    if(package.first == prev.first)
                        for(int i=0; i < package.second-prev.second; i++) path.push_back('U');
                    else 
                        for(int i=0; i < package.first-prev.first; i++) path.push_back('R');
                    count+=package.first-prev.first+package.second-prev.second;
                    prev = package;
                } else {
                    count+=package.first-prev.first+package.second-prev.second;
                    for(int i=0; i < package.first-prev.first; i++) path.push_back('R');
                    for(int i=0; i < package.second-prev.second; i++) path.push_back('U');
                }
            } else {
                flag = 1;
                printf("NO\n");
                break;
            }
            prev = package;
        }
        if(flag == 0) cout << "YES\n" << path << endl;
    }
    return 0;
}