#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, mpage;
    cin >> n;
    vector<int> mystery(n+1, 0);
    for(int i=1; i <= n; i++) {
        cin >> mpage;
        mystery[mpage]++;
    }
    int days = 0, count = 0;
    for(int i=1; i <= n; i++) {
        count++;
        count-=mystery[i];
        if(count == 0) days++;
    }
    cout << days << endl;
    return 0;
}