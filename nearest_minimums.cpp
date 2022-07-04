#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> arr;
    int mn = INT32_MAX;
    for(int i=0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
        mn = min(num, mn);
    }

    int min_distance = n, prev = -1000000;
    for(int i=0; i < arr.size(); i++) {
        if(arr[i] == mn) {
            min_distance = min(min_distance, i-prev);
            prev = i;
        }
    }
    printf("%d\n", min_distance);
    return 0;
}