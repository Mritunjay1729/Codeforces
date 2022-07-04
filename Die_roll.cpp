#include <iostream>

using namespace std;

int hcf(int a, int b) {
    if(a > b) return hcf(a-b, b);
    else if(b > a) return hcf(b-a, a);
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 6-max(a, b); ans++;
    if(ans == 0) cout << "0/1" << endl;
    else{
        int k = hcf(ans, 6);
        cout << ans/k << "/" << 6/k << endl;
    }
    return 0;
}