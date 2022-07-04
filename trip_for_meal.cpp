#include <iostream>

using namespace std;

int main() {
    int n, a, b, c;
    cin >> n;
    cin >> a >> b >> c;
    int dist = 0;
    if(n > 1) {
        dist += min(a, b);
        int path = min(a, min(b, c));
        if(n > 2) dist += (n-2)*path;
    }
    printf("%d\n", dist);
    return 0;
}