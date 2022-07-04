#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x, y, curr_capacity, max_capacity;
    curr_capacity = max_capacity = 0;
    for(int i=0; i < n; i++) {
        cin >> x >> y;
        curr_capacity+=(y-x);
        max_capacity = max(curr_capacity, max_capacity);
    }
    cout <<max_capacity << endl;
    return 0;
}