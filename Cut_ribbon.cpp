#include <iostream>
#include <vector>

using namespace std;

vector<int> max_count(4001, -1);

int Count(int n, int a, int b, int c) {
    if(n == 0) return 0;
    if(max_count[n] != -1) return max_count[n];
    int ans = -4000;
    if(n >= a) ans=max(ans, 1+Count(n-a, a, b, c));
    if(n >= b) ans=max(ans, 1+Count(n-b, a, b, c));
    if(n >= c) ans=max(ans, 1+Count(n-c, a, b, c));
    max_count[n] = ans;
    return ans;
}

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << Count(n, a, b, c) << endl;
    return 0;
}