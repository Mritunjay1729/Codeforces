#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    map<string, int> val;
    for(int i=0; i < n-1; i++) {
        val[str.substr(i, 2)]++;
    }

    int max_count = 0;
    string mgram;
    for(auto count : val) {
        if(count.second > max_count) {
            max_count = count.second;
            mgram = count.first;
        }
    }

    cout << mgram << endl;
    return 0;
}