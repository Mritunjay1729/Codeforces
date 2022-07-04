#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    map<char, int> count;
    for(int i=0; i < n; i++) count[str[i]]++;
    map<char, int> deletions;
    for(auto &cnt : count) {
        while(cnt.second > 0 && k > 0) {
            deletions[cnt.first]++;
            cnt.second--;
            k--;
        }
    }

    string res = "";
    for(auto chr : str) {
        if(deletions.find(chr) != deletions.end() && deletions[chr] > 0) {
            deletions[chr]--;
            continue;
        }
        res.push_back(chr);
    }
    cout << res << endl;
    return 0;
}