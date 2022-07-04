#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#define PI 3.1415926536

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> radii(n);
    for(int i=0; i < n; i++) cin >> radii[i];
    double area = 0;
    sort(radii.begin(), radii.end(), greater<int>());
    for(int i=0; i < n; i++) area+=PI*(i%2==0?radii[i]*radii[i]:-radii[i]*radii[i]);
    cout << fixed << setprecision(10) << area << endl;
    return 0;
}