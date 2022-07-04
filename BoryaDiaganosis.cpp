#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int start = 0;
    int s, d;
    for(int i=0; i < n; i++) {
        cin >> s >> d;
        int x=0;
        while(s+d*x <= start) x++;
        start = s+d*x;
    }
    printf("%d\n", start);
    return 0;
}