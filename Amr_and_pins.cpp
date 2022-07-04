#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r, l1, r1, l2, r2;
    cin >> r >> l1 >> r1 >> l2 >> r2;
    double d = sqrt((l2-l1)*(l2-l1)+(r2-r1)*(r2-r1));
    int count = (int)d/(2*r);
    d/=2*r;
    if(d-(int)d != 0) count++;
    cout << count << endl;
    return 0;
}