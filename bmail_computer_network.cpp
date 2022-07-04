#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int val[n-1];
    for(int i=0; i < n-1; i++) cin >> val[i];
    int target = n, i = n-2;
    vector<int> res;
    res.push_back(n);
    while(i >= 0) {
        res.push_back(val[i]);
        i = val[i]-2;
    }
    for(int i=res.size()-1; i >= 0; i--) printf("%d ", res[i]);
    return 0;
}