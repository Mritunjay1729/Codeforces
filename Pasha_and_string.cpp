#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    string gift;
    cin >> gift;
    n = gift.length();
    vector<int> count((n+1)/2, 0);
    int k, x; cin >> k;
    while(k--) {
        cin >> x;
        if(x > (n+1)/2) x=n-x+1;
        count[x-1]++;
    }

    int sum = 0;
    for(int i=0; i < count.size(); i++) {
        sum+=count[i];
        count[i] = sum;
    }
    
    for(int i=0; i < count.size(); i++) {
        if(count[i]%2) swap(gift[i], gift[n-i-1]);
    }
    cout << gift << endl;
    return 0;
}