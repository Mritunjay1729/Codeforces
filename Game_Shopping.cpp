#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> games(m);
    vector<int> bills(n);

    for(int i=0; i < m; i++) cin >> games[i];
    for(int j=0; j < n; j++) cin >> bills[j];
    int i=0, j =0;
    int count = 0;
    while(i < m && j < n) {
        if(bills[j] >= games[i]) {j++; count++;}
        i++;
    }
    cout << count << endl;
    return 0;
}