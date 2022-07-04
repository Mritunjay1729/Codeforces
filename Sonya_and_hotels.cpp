#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> hotels(n);
    for(int i=0; i < n; i++) cin >> hotels[i];
    sort(hotels.begin(), hotels.end());
    int locations = 2;
    for(int i=1; i <n; i++) if(hotels[i]-hotels[i-1] > 2*k-1) {
        locations+=min(2, hotels[i]-hotels[i-1]-2*k+1);
    }
    cout << locations << endl; 
    return 0;
}