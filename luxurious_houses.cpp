#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, mx = 0;
    cin >> n;
    vector<int> houses(n, 0);
    for(int i=0; i < n; i++) cin >> houses[i];
    for(int i=n-1; i >= 0; i--) {
        if(mx < houses[i]) {
            mx = houses[i];
            houses[i] = 0;
        } else {
            houses[i] = mx-houses[i]+1;
        }
    }

    for(int i=0; i < n; i++) printf("%d ", houses[i]);
    printf("\n");
    return 0;
}