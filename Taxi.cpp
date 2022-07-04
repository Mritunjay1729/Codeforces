#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, members;
    cin >> n;
    int ones, twos, threes, fours;
    ones = twos = threes = fours = 0;
    while(n--) {
        cin >> members;
        switch (members){
            case 1:
                ones++;
                break;

            case 2:
                twos++;
                break;

            case 3:
                threes++;
                break;

            case 4:
                fours++;
                break;

            default:
                break;
        }
    }
    // cout << ones << " " << twos << " " << threes << " " << fours << endl;
    int taxis = 0;
    taxis += fours;
    taxis += twos/2;
    twos%=2;
    taxis += threes;
    ones = ones>threes?ones-threes:0;
    if(twos == 1) {taxis+=1; twos = 0; ones-=(ones%2)?1:2;}
    taxis+=ones/4;
    ones%=4;
    if(ones>0) taxis+=1;
    cout << taxis << endl;
    return 0;
}