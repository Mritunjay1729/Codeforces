#include <iostream>
#include <vector>
#define fl(s, n) for(int i=s; i <n; i++)

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<string> pre, suff;
    string name;
    fl(0, m) {cin >> name; pre.push_back(name);}
    fl(0, n) {cin >> name; suff.push_back(name);}
    int t;
    cin >> t;
    int year;
    while(t--) {
        cin >> year;
        cout << pre[(year-1)%m];
        cout << suff[(year-1)%n];
        cout << endl;
    }
    return 0;
}