#include <iostream>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int width = 0, height;
    while(n--) {
        cin >> height;
        if(height <= h) width+=1;
        else width+=2;
    }
    printf("%d\n", width);
    return 0;
}