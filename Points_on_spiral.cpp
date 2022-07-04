#include <iostream>
#define pr pair<int, int>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    pr pt1, pt2;
    pt1 = {0, 0};
    pt2 = {1, 0};
    int turns = 0, i = 1, j = 2;
    while(1) {
        if((pt1.first <= x && x <= pt2.first && pt1.second <= y && y <= pt2.second) ||
         (pt1.first >= x && x >= pt2.first && pt1.second >= y && y >= pt2.second)) break;
        turns++;
        swap(pt1, pt2);
        i%=4;
        pt2 = pt1;
        if(i == 0) {pt2.first+=(j+1)/2; j++;}
        else if(i == 1) {pt2.second+=(j+1)/2; j++;}
        else if(i == 2) {pt2.first-=(j+1)/2; j++;}
        else if(i == 3) {pt2.second-=(j+1)/2; j++;}
        i++;
    }
    cout << turns << endl;
    return 0;
}