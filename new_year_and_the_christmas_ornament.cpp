#include <iostream>

using namespace std;

int main() {
    int y, b, r;
    cin >> y >> b >> r;
    int ornaments = 0;
    if(r <= y && r <= b) ornaments+=3*r-3;
    else {
        if(r > y && r > b) {
            if(b > y) ornaments+=3*y+3;
            else ornaments+=3*b;
        } else if(r > y) {
            if(r > y) ornaments+=min(3*r-3, 3*y+3);
        } else {
            ornaments+=3*b;
        }
    } 
    cout << ornaments << endl;
    return 0;
}