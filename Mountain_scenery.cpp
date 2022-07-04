#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> peaks(2*n+1);
    for(int i=0; i < 2*n+1; i++) cin >> peaks[i];
    for(int i=1; i < 2*n; i++) {
        if(k == 0) break;
        if(peaks[i] > peaks[i-1]+1 && peaks[i] > peaks[i+1]+1) {peaks[i]--; k--;}
    }
    for(int i=0; i < 2*n+1; i++) cout << peaks[i] << " ";
    cout << endl;
    return 0;
}