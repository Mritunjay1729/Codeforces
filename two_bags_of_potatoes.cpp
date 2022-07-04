#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int y, k, n;
    cin >> y >> k >> n;
    int range = n-y;
    int start = k*(y/k+1)-y;
    for(int i=start; i <= range; i+=k) cout << i << " ";
    if(start > range) printf("-1\n");
    else cout << endl;
    return 0;
}