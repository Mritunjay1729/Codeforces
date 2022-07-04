#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    int sum = 0, start = 0, min_sum=INT32_MAX;
    for(int i=0; i < k; i++) {
        int sum = arr[i];
        for(int j=(i+k)%n; j!=i; j= (j+k)%n) sum+=arr[j];
        if(sum < min_sum) {
            min_sum = sum;
            start = i;
        }
    }
    cout << start+1 << endl;
    return 0;
}