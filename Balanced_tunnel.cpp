#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> entrance(n), exit(n);
    for(int i=0; i < n; i++) cin >> entrance[i];
    for(int i=0; i < n; i++) cin >> exit[i];
    int i=0, j = 0;
    int fined = 0;
    set<int> fined_cars;
    while(i < n && j < n) {
        // cout << " " << entrance[i] << " " << exit[j] << " " << fined << endl;
        if(fined_cars.find(entrance[i]) != fined_cars.end()) i++;
        else if(entrance[i] == exit[j]) {i++; j++;}
        else {fined++; fined_cars.insert(exit[j]); j++;}
    }
    cout << fined << endl;
    return 0;
}