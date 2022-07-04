#include <iostream>
#include <set>
#define pr pair<int, int>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<pr> connected;
    int x, y;
    for(int i=0; i < n; i++) {
        cin >> x >> y;
        if(x > y) swap(x, y);
        connected.insert({x, y});
    }

    int count;
    for(int i=1; i <=3 ; i++) {
        for(int j=i+1; j<=4; j++) {
            for(int k=j+1; k<=5; k++) {
                count = 0;
                count+=(connected.find({i, j}) != connected.end());
                count+=(connected.find({j, k}) != connected.end());
                count+=(connected.find({i, k}) != connected.end());
                if(count == 3 || count == 0) {
                    cout << "WIN" << endl; exit(0);
                }
            }
        }
    } 
    cout << "FAIL" << endl;
    return 0;
}