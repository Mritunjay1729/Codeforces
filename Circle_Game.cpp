#include <iostream>
#define ll long long int

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, flag;
    int stones[50];
    ll mike, joe;
    while(t--) {
        cin >> n;
        for(int i=0; i < n; i++) cin >> stones[i];
        if(n%2 == 0) {
            int min=INT32_MAX, min_index;
            for(int i=0; i < n; i++) {
                if(min > stones[i]) {
                    min = stones[i];
                    min_index = i;
                }
            }
            if(min_index%2 == 0) cout << "Joe" << endl;
            else cout << "Mike" << endl;
        }else{
            cout << "Mike" << endl;
        }
    }
    return 0;
}