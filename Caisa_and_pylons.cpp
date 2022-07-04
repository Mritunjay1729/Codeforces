#include <iostream>

using namespace std;

int main() {
    int n, height;
    cin >> n;
    int prev = 0, energy= 0, min_energy = 0;
    while(n--) {
        cin >> height;
        energy += prev-height;
        prev = height;
        if(energy < 0) min_energy = min(energy, min_energy);
    }
    printf("%d\n", min_energy<0?abs(min_energy):0);
    return 0;
}