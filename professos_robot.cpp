#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x_diff = abs(x1-x2), y_diff = abs(y1-y2);
    int no_of_steps = min(x_diff, y_diff);
    x_diff-=no_of_steps;
    y_diff-=no_of_steps;
    no_of_steps+=x_diff+y_diff;
    printf("%d\n", no_of_steps);
    return 0;
}