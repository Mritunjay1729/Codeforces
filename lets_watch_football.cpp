#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int wtime = ((a*c)%b==0)?(a*c)/b:(a*c)/b+1;
    wtime -= c;
    printf("%d\n", wtime);
    return 0;
}