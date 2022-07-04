#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    string str;
    cin >> n >> k;
    cin >> str;
    map<string, int> freq;

    int count = 1;
    string curr = "";
    curr.push_back(str[0]);
    for(int i=1; i < str.length(); i++) {
        if(str[i] == str[i-1] && count < k) count++;
        else {
            if(count == k) freq[curr]++;
            curr = "";
            count = 1;  
        }
        curr.push_back(str[i]);
    }
    if(count == k) freq[curr]++;

    int max_level = 0;
    for(auto level: freq) {
        // cout << level.first << " " << level.second << endl;
        max_level = max(max_level, level.second);
    }
    cout << max_level << endl;
    return 0;
}