#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n+1);
    for(int i=1; i <= n; i++) cin >> arr[i];
    queue<int> seq;
    for(int i=1; i <=n; i++) seq.push(i);
    int index;
    while(seq.size()!=1) {
        index = seq.front();
        seq.pop();
        arr[index]-=m;
        if(arr[index] > 0) seq.push(index);
    }
    cout << seq.front() << endl;
    return 0;
}