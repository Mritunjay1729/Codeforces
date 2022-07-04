#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double l, d, v, g, r;
    cin >> l >> d >> v >> g >> r;
    double time = 0;
    time+=d/v;
    double k = time-(g+r)*(int)(time/(g+r));
    if(k >= g) time+=(g+r)-k;
    time+=(l-d)/v;
    cout << fixed << setprecision(10) << time << endl;
    return 0;
}