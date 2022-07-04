#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int p;
    cin >> p;
    int count = 0;
    for(int i=2; i < p; i++) {
        int x = i, j;
        for(j=1; j < p-1; j++) {
            if((x-1)%p == 0) break;
            x*=i;
            x%=p;
        }
        if(j == p-1 && (x-1)%p == 0) count++;
    }
    if(p == 2) cout << 1 << endl;
    else cout << count << endl;
    return 0;
}