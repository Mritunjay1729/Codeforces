#include <iostream>
#include <vector>
#define fl(s, n) for(int i=s; i < n; i++)

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> party(n);
    int required_seats = 0;
    fl(0, n) {cin >> party[i]; required_seats+=party[i];}
    required_seats = (required_seats+2)/2;
    int current_seats = party[0];
    int i=1;
    vector<int> coalition;
    coalition.push_back(1);
    while(i < n && current_seats < required_seats) {
        if(2*party[i] <= party[0]) {
            current_seats+=party[i];
            coalition.push_back(i+1);
        }
        i++;
    }
    // cout << current_seats << " " << required_seats << endl;
    if((coalition.size() == 1 && party[0] < required_seats) || current_seats < required_seats)  cout << 0 << endl;
    else {
        cout << coalition.size() << endl;
        fl(0, coalition.size()) cout << coalition[i] << " ";
        cout << endl;
    }
    return 0;
}