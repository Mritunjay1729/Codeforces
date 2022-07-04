#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n, num, prev;
    cin >> t;
    int res = 0;
    while(t--) {
        res = 0;
        cin >> n;
        cin >> prev;
        if(prev != 0)  res++;
        for(int i=1; i < n; i++) {
            cin >> num;
            if(num != 0) {
                if(prev == 0) res++;
            }
            prev = num;
        }
        cout << min(2, res) << endl;
    }
    return 0;
}