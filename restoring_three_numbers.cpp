#include <iostream>

using namespace std;

int main() {
    int x, y, z, sum;
    cin >> x >> y >> z >> sum;
    if(x > sum) swap(x, sum);
    if(y > sum) swap(y, sum);
    if(z > sum) swap(z, sum);
    printf("%d %d %d\n", x+y-sum, y+z-sum, z+x-sum);
    return 0;
}