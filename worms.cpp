#include <iostream>
#include <vector>
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
    IO;

    int n, worms;
    cin >> n;
    int last=0;
    vector<int> positions;
    for(int i=0; i < n; i++) {
        cin >> worms;
        last+=worms;
        positions.push_back(last);
    }

    int q, worm;
    cin >> q;
    int l, h, mid;
    while(q--) {
        cin >> worm;
        l=1, h=n;
        while(l < h){
            mid = (l+h)/2;
            if(worm == positions[mid-1]) break;
            else if(worm < positions[mid-1]) h = mid-1;
            else l = mid + 1;
            // printf("%d %d %d\n", l, mid, h);
        }
        if(l < h) cout << mid << endl;
        else {
            if(positions[l-1] >= worm) cout << l << endl;
            else cout << l+1 << endl;
        }
    }
    return 0;
}