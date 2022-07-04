#include <iostream>
#include <map>
#include <set>
#define pr pair<string, string>
#define pri pair<int, int>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    string sender, receiver;
    map<pr, pri> logs;
    int time;
    set<pr> friends;
    for(int i=0; i < n; i++) {
        cin >> sender >> receiver >> time;
        if(friends.find({sender, receiver}) != friends.end() ||
         friends.find({receiver, sender}) != friends.end()) continue;
        else if(logs.find({receiver, sender}) != logs.end()) {
            pri t = logs[{receiver, sender}];
            if(t.first != -1 && time-t.first > 0 && time-t.first <= d) {
                friends.insert({sender, receiver});
            }else if(time-t.second > 0 && time-t.second <= d){
                friends.insert({sender, receiver});
            }else{
                if(logs.find({sender, receiver}) == logs.end()) 
                    logs[{sender, receiver}] = {-1, time};
                else if(logs[{sender, receiver}].second == time) continue;
                else logs[{sender, receiver}] = {logs[{sender, receiver}].second, time};
            }
        }else{
            if(logs.find({sender, receiver}) == logs.end()) 
                logs[{sender, receiver}] = {-1, time};
            else if(logs[{sender, receiver}].second == time) continue;
            else logs[{sender, receiver}] = {logs[{sender, receiver}].second, time};
        }
    }
    cout << friends.size() << endl;
    for(auto pair : friends) cout << pair.first << " " << pair.second << endl;
    return 0;
}