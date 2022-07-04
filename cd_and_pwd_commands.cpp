#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    string commands, res, location;
    map<int, string> path;
    int count;
    count = 1;
    while(t--){
        cin >> commands;
        if(commands.compare("pwd") == 0) {
            cout << "/";
            for(auto p : path) {
                cout << p.second << "/";
            }
            cout << endl;
            
        }else{
            cin >> location;
            location.push_back('/');
            string dir = "";
            int start = 0;
            if(location[start] == '/') {path.clear(); count = 1;}
            while(start < location.length()) {
                if(location[start] == '/') {
                    if(dir != "" && dir.compare("..") != 0)  path[count++] = dir;
                    else if(dir.compare("..") == 0) {count--; path.erase(count);}
                    dir = "";
                } else {
                    dir.push_back(location[start]);
                }
                start++;
            }
        }
    }
    return 0;
}