#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(2*n);
    for(int i=1; i <= 2*n; i++) arr[i-1] = i;
    for(int i=0; i < 2*k; i+=2) {
        swap(arr[i], arr[i+1]);
    }
    for(int i=0; i < 2*n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}