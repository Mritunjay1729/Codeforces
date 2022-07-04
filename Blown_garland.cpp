#include <iostream>
#include <map>

using namespace std;

int main() {
    string garland;
    cin >> garland;
    map<int, char> color;
    for(int i=0; i <garland.size(); i++) {
        if(garland[i] != '!') color[i%4] = garland[i];
    }

    int r, b, y, g;
    r = b = y = g = 0;
    for(int i=0; i < garland.size(); i++) {
        if(garland[i] == '!') {
            if(color[i%4] == 'R') r++;
            else if(color[i%4] == 'B') b++;
            else if(color[i%4] == 'Y') y++;
            else g++;
        }
    }
    cout << r << " " << b << " " << y << " " << g << endl;
    return 0;
}