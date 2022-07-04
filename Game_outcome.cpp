#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> row(n, 0), col(n, 0);
    int val;
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            cin >> val;
            row[i]+=val;
            col[j]+=val;
        }
    }

    int winning = 0;
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            if(col[j] > row[i]) winning++;
        }
    }
    cout << winning << endl;
    return 0;
}