#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, p;
    cin >> n;
    vector<int> present(n);
    for(int i=1; i<=n; i++) {
        cin >> p;
        present[p-1] = i;
    }
    for(int i=0; i < n; i++) printf("%d ", present[i]);
    return 0;
}