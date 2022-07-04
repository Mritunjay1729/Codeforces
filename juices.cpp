#include <iostream>

using namespace std;

int main() {
    int n, b, d;
    int size, total_size = 0, empty = 0;
    cin >> n >> b >> d;
    while(n--) {
        cin >> size;
        if(size <= b) {
            total_size += size;
            if(total_size > d) {
                empty+=1;
                total_size = 0;
            }
        }
    }
    cout << empty << endl;
    return 0;
}