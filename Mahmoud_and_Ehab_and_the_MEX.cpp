#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, num;
    vector<int> set(101, -1);
    cin >> n >> k;
    for(int i=0; i < n; i++) {
        cin >> num;
        set[num] = 1;
    }

    int count = 0;
    for(int i=0; i < k; i++) {
        if(set[i] == -1) count++;
    }
    if(set[k] != -1) count++;
    cout << count << endl;
    return 0;
}