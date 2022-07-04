#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    int n, h, k;
    cin >> n >> h >> k;
    vector<int> heights;
    int height;
    for(int i=0; i < n; i++) {cin >> height; heights.push_back(height);}
    int theight = 0, i=0;
    ll count = 0;
    int flag = 0;
    while(i < n) {
        while(i < n && theight+heights[i] <= h) theight+=heights[i++];
        if(theight < k) {count++; theight=0;}
        else {
            count+=theight/k;
            theight%=k;
        }
    }
    count+=theight/k;
    theight%=k;
    if(theight > 0) count++;
    
    cout << count << endl;
    return 0;
}