#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int min_y1, max_x1, x, y;
    cin >> max_x1 >> min_y1;
    for(int i=1; i < n; i++) {
        cin >> x >> y;
        max_x1 = max(max_x1, x);
        min_y1 = min(min_y1, y);
    }

    int m;
    cin >> m;
    int max_x2, min_y2;
    cin >> max_x2 >> min_y2;
    for(int i=1; i < m; i++) {
        cin >> x >> y;
        max_x2 = max(max_x2, x);
        min_y2 = min(min_y2, y);
    }
    // cout << max_x1 << " " << min_y2 << " " << max_x2 << " " << min_y2 << endl;
    cout << max(0, max(max_x1-min_y2, max_x2-min_y1)) << endl;
    return 0;
}