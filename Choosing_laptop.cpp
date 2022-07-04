#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int speed, ram, hdd, cost;
    vector<vector<int>> laptops(n, vector<int>(4));
    for(int i=0; i < n; i++) {
        cin >> speed >> ram >> hdd >> cost;
        laptops[i] = {speed, ram, hdd, cost};
    }

    int i, j;
    vector<int> desired;
    for(i=0; i <n; i++) {
        for(j=0; j < n; j++) {
            if(i == j) continue;
            if(laptops[i][0] < laptops[j][0] && 
            laptops[i][1] < laptops[j][1] &&
            laptops[i][2] < laptops[j][2]) break;
        }
        if(j == n) desired.push_back(i);
    }
    int min_price = INT32_MAX,min_index;
    for(int i=0; i < desired.size(); i++) {
        if(laptops[desired[i]][3] < min_price) {
            min_price = laptops[desired[i]][3];
            min_index = desired[i]+1;
        }
    }
    cout << min_index << endl;
    return 0;
}