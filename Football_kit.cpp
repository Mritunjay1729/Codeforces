#include <iostream>
#include <vector>
#include <map>
#define pr pair<int, int>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pr> jersey(n);
    int home, away;
    map<int, int> homej;
    for(int i=0; i < n; i++) {
        cin >> home >> away;
        jersey[i] = {home, away};
        homej[home]++;
    }

    for(int i=0; i < n; i++) {
        int h, a;
        h = a = n-1;
        h+=homej[jersey[i].second];
        a-=homej[jersey[i].second];
        cout << h << " " << a << endl;
    }
    return 0;
}