#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    double vb, vs;
    cin >> n >> vb >> vs;
    vector<int> stops(n);
    for(int i=0; i < n; i++) cin >> stops[i];
    int fx, fy;
    cin >> fx >> fy;
    int stop_index = 1;
    double min_time = (double)INT32_MAX, time;
    for(int i=1; i < n; i++) {
        time = stops[i]/vb + (sqrt(pow(fx-stops[i], 2) + pow(fy, 2)))/vs;
        if(time <= min_time) {
            min_time = time;
            stop_index = i+1;
        }
    }
    cout << max(2, stop_index) << endl;
    return 0;
}