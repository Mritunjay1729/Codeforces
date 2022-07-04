#include <iostream>
#include <map>
#define pr pair<double, double>

using namespace std;

int main() {
    int n;
    double x0, y0;
    cin >> n >> x0 >> y0;
    double m, c;
    double x, y;
    map<pr, int> line;
    for(int i=0; i < n; i++) {
        cin >> x >> y;
        if(x-x0 == 0) line[{abs(x-x0), 0}]++;
        else {
            m = (y-y0)/(x-x0);
            c = y0-m*x0; 
            line[{m, c}]++;
        }
    }
    cout << line.size() << endl;
    return 0;
}