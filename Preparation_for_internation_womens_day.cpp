#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(k, 0);
    int num, count = 0;
    for(int i=0; i < n; i++) {
        cin >> num;
        if(num%k == 0) {
            if(arr[0] > 0) {arr[0]--; count++;}
            else arr[0]++;
        }else{
            if(arr[k-num%k] > 0) {arr[k-num%k]--; count++;}
            else arr[num%k]++;
        }
    }
    cout << count*2 << endl;
    return 0;
}