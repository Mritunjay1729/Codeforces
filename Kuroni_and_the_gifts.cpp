#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, brightness;
    vector<int> necklace, bracelet;
    while(t--) {
        cin >> n;
        necklace.clear();
        bracelet.clear();
        for(int i=0; i<n; i++) {cin >> brightness; necklace.push_back(brightness);}
        for(int i=0; i<n; i++) {cin >> brightness; bracelet.push_back(brightness);}
        sort(necklace.begin(), necklace.end());
        sort(bracelet.begin(), bracelet.end());
        for(int i=0; i<n; i++) cout << necklace[i] << " ";
        cout << endl;
        for(int i=0; i<n; i++) cout << bracelet[i] << " ";
        cout << endl;
    }
    return 0;
}