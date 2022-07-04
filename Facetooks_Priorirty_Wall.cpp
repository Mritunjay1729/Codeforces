#include <iostream>
#include <vector>
#include <map>
#include <set>
#define pr pair<int, string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> posts(5);
    string me;
    cin >> me;
    int n;
    map<string, int> index;
    vector<pr> friends;
    cin >> n;
    string frnd;
    int k = 0;
    for(int i=0; i < n; i++) {
        for(int i=0; i < 4; i++) cin >> posts[i];
        if(posts[1] != "likes") cin >> posts[4];
        else{
            swap(posts[3], posts[4]);
            swap(posts[2], posts[3]);
        }

        if(posts[0] == me) {
            frnd = posts[3].substr(0, posts[3].length()-2);
        }else if(posts[3].substr(0, posts[3].length()-2) == me) {
            frnd = posts[0];
        }else{
            if(index.find(posts[0]) == index.end()) {index[posts[0]] = k++; friends.push_back({0, posts[0]});}
            if(index.find((frnd=posts[3].substr(0, posts[3].length()-2))) == index.end()) {
                index[frnd] = k++;
                friends.push_back({0, frnd});
            }
            continue;
        }

        if(index.find(frnd) == index.end()) {
            index[frnd] = k++;
            friends.push_back({0, frnd});
        }

        if(posts[1] == "posted") friends[index[frnd]].first+=15;
        else if(posts[1] == "commented") friends[index[frnd]].first+=10;
        else if(posts[1] == "likes") friends[index[frnd]].first+=5;
    } 
    sort(friends.begin(), friends.end(), greater<pr>());
    map<int, set<string>, greater<int>> results;
    for(int i=0; i < friends.size(); i++) {
        results[friends[i].first].insert(friends[i].second);
    }

    for(auto res : results) {
        for(auto name : res.second) cout << name << endl;
    }
    return 0;
}