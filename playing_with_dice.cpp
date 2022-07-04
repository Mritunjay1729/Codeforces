#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int aw, bw, tie;
    aw = bw = tie = 0;
    for(int i=1; i <=6; i++) {
        if(abs(a-i) < abs(b-i)) aw++;
        else if(abs(a-i) > abs(b-i)) bw++;
        else tie++;
    }
    printf("%d %d %d\n", aw, tie, bw);
    return 0;
}