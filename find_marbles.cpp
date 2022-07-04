#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, initial, final;
    cin >> n >> initial >> final;
    vector<int> shift(n+1);
    for(int i=0; i < n; i++) cin >> shift[i+1];

    int start = initial, count = 0;
    while(start != final && count <= n) {
        count++;
        start = shift[start];
    }

    if(count <= n) cout << count << endl;
    else cout << -1 << endl;
    return 0;
}