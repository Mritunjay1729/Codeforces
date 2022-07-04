#include <iostream>

using namespace std;

int main() {
    int x1, x2;
    cin >> x1 >> x2;
    int common_point = (x1+x2)/2;
    if(x1 > x2) swap(x1, x2);
    int res = ((common_point-x1)*(common_point-x1+1))/2 + ((x2-common_point)*(x2-common_point+1))/2;
    printf("%d\n", res);
    return 0;
}