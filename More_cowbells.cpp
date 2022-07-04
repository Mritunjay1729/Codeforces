#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> cowbells(n);
    for(int i=0; i < n; i++) cin >> cowbells[i];
    if(k >= n) {cout << cowbells[n-1] << endl; exit(0);}
    int i=0, j = n-1;
    int mxweight = 0;
    while(j-i+1 < 2*k) {
        mxweight = max(mxweight, cowbells[j--]);  
        k--; 
    }

    while(i < j) {
        mxweight = max(mxweight, cowbells[i]+cowbells[j]);
        i++, j--;
    }
    cout << mxweight << endl;
    return 0;
}