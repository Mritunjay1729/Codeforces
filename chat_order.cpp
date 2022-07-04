#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    string chat;
    cin >> n;
    vector<string> chatcol;
    set<string> chatlist;

    for(int i=0; i <  n; i++) {
        cin >> chat;
        chatcol.push_back(chat);
    }
    for(int i=n-1; i >=0; i--) {
        if(chatlist.find(chatcol[i]) != chatlist.end()) continue;
        else {
            cout << chatcol[i] << endl;
            chatlist.insert(chatcol[i]);
        }
    }
    return 0;
}