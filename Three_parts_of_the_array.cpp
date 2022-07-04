#include <iostream>
#include <vector>
#define uint unsigned int
#define ull unsigned long long int

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<uint> arr(n);
    for(uint i=0; i < n; i++) cin >> arr[i];
    uint i=0, j = n-1;
    ull max_sum = 0, sum1  = 0, sum2 = 0;
    while(i <= j) {
        if(sum1 <= sum2) sum1+=arr[i++];
        else sum2+=arr[j--];
        if(sum1 == sum2) max_sum = sum1;
    }  
    cout << max_sum << endl;
    return 0;
}